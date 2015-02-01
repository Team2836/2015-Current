#include "ClawOut.h"

ClawOut::ClawOut()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(claw);
}

// Called just before this Command runs the first time
void ClawOut::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ClawOut::Execute()
{
	claw->MoveOut();
}

// Make this return true when this Command no longer needs to run execute()
bool ClawOut::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ClawOut::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClawOut::Interrupted()
{

}
