#include <Commands/ToteControl.h>
#include "ToteMagnet.h"
#include "../RobotMap.h"

ToteMagnet::ToteMagnet() :
		Subsystem("ExampleSubsystem")
{
	ls4tote = new DigitalInput(4);//checks to see if the tote is against the back of the robot
	t5 = new Talon(4);//controls the tote magnet's wheels
}

void ToteMagnet::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand();
	SetDefaultCommand(new ToteControl());
}
void ToteMagnet::MoveTalon(float speed, int joystick)
{
	bool bls4tote = ls4tote->Get();
	if(bls4tote == true)
	{
		t5->Set(0);
	}
	else if(bls4tote == false && joystick == 1)
	{
		t5->Set(speed);
	}
	else if(bls4tote == false && joystick == 2)
	{
		t5->Set(speed);
	}
	//t5->Set(speed);
	//std::cout << speed << std::endl;
	//std::cout << speed << std::endl;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
