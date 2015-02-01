#include "ToteMagnetControlForward.h"

ToteMagnetControlForward::ToteMagnetControlForward()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(totemagnet);
}

// Called just before this Command runs the first time
void ToteMagnetControlForward::Initialize()
{
	totemagnet->MoveTalonOut(1);
}

// Called repeatedly when this Command is scheduled to run
void ToteMagnetControlForward::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToteMagnetControlForward::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ToteMagnetControlForward::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToteMagnetControlForward::Interrupted()
{

}
