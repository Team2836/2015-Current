#include "moveback.h"

moveback::moveback()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(examplesubsystem);
}

// Called just before this Command runs the first time
void moveback::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void moveback::Execute()
{
	examplesubsystem->MLside(-1);
	examplesubsystem->MRside(-1);
}

// Make this return true when this Command no longer needs to run execute()
bool moveback::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void moveback::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void moveback::Interrupted()
{

}
