#include "Claw.h"
#include "../RobotMap.h"

Claw::Claw() :
		Subsystem("ExampleSubsystem")
{
	ls1forclaw = new DigitalInput(0);// checks if claw has reached max out
	ls2forclaw = new DigitalInput(1); // check if claw has reached max in
	ls3forclaw = new DigitalInput(2);// checks if claw has tote
	t6 = new Talon(5);

}

void Claw::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Claw::MoveIn()
{
	bool bls2forclaw = ls2forclaw->Get();
	bool bls3forclaw = ls3forclaw->Get();

	t6->Set(-.2);

	if(bls2forclaw == 1)
	{
		t6->Set(0);
	}
	if(bls3forclaw == 1)
	{
		t6->Set(0);
	}
}
void Claw::MoveOut()
{
	bool bls1forclaw = ls1forclaw->Get();
	bool bls3forclaw = ls3forclaw->Get();

	t6->Set(.2);

	if(bls1forclaw == 1)
	{
		t6->Set(0);
	}
	if(bls3forclaw == 1)
	{
		t6->Set(0);
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
