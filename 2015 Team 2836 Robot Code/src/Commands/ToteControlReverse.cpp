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
	bool OPbutton = oi->operator1->GetRawButton(1);
	bool DRbutton = oi->driver1->GetRawButton(1);
	if(OPbutton == 1 && DRbutton == 1)
	{
		totemagnet->MoveTalonIn(1, 1);
	}
	if(OPbutton == 0 && DRbutton == 1)
	{
		totemagnet->MoveTalonIn(1, 2);
	}
	if(OPbutton == 1 && DRbutton == 0)
	{
		totemagnet->MoveTalonIn(1, 1);
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
