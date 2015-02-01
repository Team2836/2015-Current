#include "ClawIn.h"

ClawIn::ClawIn()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(claw);
}

// Called just before this Command runs the first time
void ClawIn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ClawIn::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ClawIn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ClawIn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClawIn::Interrupted()
{

}
