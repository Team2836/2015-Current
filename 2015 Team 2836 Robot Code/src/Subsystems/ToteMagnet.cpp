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
	//SetDefaultCommand(new MySpecialCommand());
}
void ToteMagnet::MoveTalonIn(float speed, int whichjoystick)
{
	bool bls4tote = ls4tote->Get();
	if(bls4tote == 1)// if the tote is against the back of the robot
	{
		t5->Set(0);// not moving the robot
	}
	else if(bls4tote == 0)// if the tote isn't against the back of the robot
	{
		if(whichjoystick == 1)//operator has control
			{
				t5->Set(speed);//moving the tote out a speed of one
			}
		if(whichjoystick == 2)//driver has control
			{
				t5->Set(speed);//moving the tote out at a speed of one
			}
	}
}
void ToteMagnet::MoveTalonOut(float speed)
{
	t5->Set(1);// move the tote out at a speed of one
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
