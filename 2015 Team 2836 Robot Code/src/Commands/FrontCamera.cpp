#include "FrontCamera.h"

FrontCamera::FrontCamera()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(cameracontrol);
}

// Called just before this Command runs the first time
void FrontCamera::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void FrontCamera::Execute()
{
	cameracontrol->FrontCamera();
}

// Make this return true when this Command no longer needs to run execute()
bool FrontCamera::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void FrontCamera::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FrontCamera::Interrupted()
{

}
