#include "ExampleSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"
ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	t1 = new Talon(0); // move arms in
	t2 = new Talon(1); // bring arms up
	t3 = new Talon(2); // left side wheels
	t4 = new Talon(3); // right side wheels

	ls1 = new DigitalInput(0);
	ls2 = new DigitalInput(1);
	ls3 = new DigitalInput(2);
	ls4 = new DigitalInput(3);

	timer = new Timer;
	movetimer = new Timer;
}

void ExampleSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ExampleCommand());
}
void ExampleSubsystem::Sequence()
{
	timer->Start();
	bool bls1 = ls1->Get();
	bool bls2 = ls2->Get();
	bool bls3 = ls3->Get();
	bool bls4 = ls4->Get();

	double timerVal = timer->Get();
	double movetimerVal = movetimer->Get();

	if(bls1 == 0)
	{
		t1->Set(.2);
		t2->Set(0);
		t3->Set(0);
		t4->Set(0);
		std::cout << "Moving in arms" << std::endl;

	}
	if(bls1 == 0 && timerVal > 5)
	{
		t1->Set(0);
		t2->Set(0);
		t3->Set(0);
		t4->Set(0);
		std::cout << "5 seconds has passed and limit switch 1 hasn't been pressed so stopping motors" << std::endl;
		//ExampleSubsystem::Sequence();

	}
	if(bls1 == 1)
	{
		t1->Set(0);
		t2->Set(.2);
		t3->Set(0);
		t4->Set(0);
		std::cout << "Bringing tote up" << std::endl;
	}
	if(bls1 == 1 && bls2 == 1)
	{
		t1->Set(0);
		t2->Set(0);
		t3->Set(-.2);
		t4->Set(.2);
		movetimer->Start();
		std::cout << "Turning robot left" << std::endl;
	}
	if(bls1 == 1 && bls2 == 1 && movetimerVal > 5)
	{
		t1->Set(-.2);
		t2->Set(-.2);
		t3->Set(0);
		t4->Set(0);
		Wait(3);
		std::cout << "Dropping tote" << std::endl;
	}
	if(bls3 == 1 && bls1 == 0 && bls2 == 0 && bls4 == 1)
	{
		t1->Set(0);
		t2->Set(0);
		t3->Set(0);
		t4->Set(0);
		std::cout << "Stopping arms moving out" << std::endl;
	}

}
// Put methods for controlling this subsystem
// here. Call these from Commands.

