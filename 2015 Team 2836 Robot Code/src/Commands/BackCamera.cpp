#include "BackCamera.h"

BackCamera::BackCamera()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(cameracontrol);
}

// Called just before this Command runs the first time
void BackCamera::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void BackCamera::Execute()
{
	cameracontrol->BackCamera();
}

// Make this return true when this Command no longer needs to run execute()
bool BackCamera::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void BackCamera::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BackCamera::Interrupted()
{

}
