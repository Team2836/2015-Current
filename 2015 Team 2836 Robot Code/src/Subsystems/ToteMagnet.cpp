#include "ToteMagnet.h"
#include "../RobotMap.h"

ToteMagnet::ToteMagnet() :
		Subsystem("ExampleSubsystem")
{
	ls4tote = new DigitalInput(4);
	t5 = new Talon(4);
}

void ToteMagnet::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void ToteMagnet::MoveTalonIn(float speed, int whichjoystick)
{
	if(whichjoystick == 1)
	{
		t5->Set(speed);
	}
	if(whichjoystick == 2)
	{
		t5->Set(speed);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
