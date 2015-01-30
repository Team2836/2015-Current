#include "lsticky.h"

lsticky::lsticky()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(examplesubsystem);
}

// Called just before this Command runs the first time
void lsticky::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void lsticky::Execute()
{
	float lsticky = (oi->xcontroller->GetRawAxis(2));
	float lstickx = (oi->xcontroller->GetRawAxis(1));
	examplesubsystem->MLside(lsticky-lstickx);
	examplesubsystem->MRside(lsticky+lstickx);
	//oi->xcontroller->SetRumble(kLeftRumble,1);
}

// Make this return true when this Command no longer needs to run execute()
bool lsticky::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void lsticky::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void lsticky::Interrupted()
{

}
