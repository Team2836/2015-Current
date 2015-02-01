#include "ToteControlReverse.h"

ToteControlReverse::ToteControlReverse()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(totemagnet);
}

// Called just before this Command runs the first time
void ToteControlReverse::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToteControlReverse::Execute()
{
	bool OPbutton = oi->operator1->GetRawButton(1);// checks to see if the trigger on the operators joystick is pressed
	bool DRbutton = oi->driver1->GetRawButton(1);// checks to see if the trigger on the drivers joystick is pressed
	if(OPbutton == 1 && DRbutton == 1)// if both the operators and drivers triggers are pressed
	{
		totemagnet->MoveTalonIn(1, 1);// operator overrides driver and sets speed of the tote magnet to 1
	}
	if(OPbutton == 0 && DRbutton == 1)// if just driver's trigger is pressed
	{
		totemagnet->MoveTalonIn(1, 2);// outputs speed of one and used by the driver
	}
	if(OPbutton == 1 && DRbutton == 0)// if just operator's trigger is pressed
	{
		totemagnet->MoveTalonIn(1, 1);// outputs speed of one and used by operator
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ToteControlReverse::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ToteControlReverse::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToteControlReverse::Interrupted()
{

}
