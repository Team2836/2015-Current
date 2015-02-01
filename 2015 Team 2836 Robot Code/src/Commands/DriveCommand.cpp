#include "DriveCommand.h"

DriveCommand::DriveCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(drivetrain);
}

// Called just before this Command runs the first time
void DriveCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveCommand::Execute()
{
	drivetrain->FLDrive(oi->driver1->GetY() + oi->driver1->GetX() + oi->driver1->GetZ());
	drivetrain->BLDrive(oi->driver1->GetY() - oi->driver1->GetX() + oi->driver1->GetZ());
	drivetrain->FRDrive(oi->driver1->GetY() - oi->driver1->GetX() - oi->driver1->GetZ());
	drivetrain->BRDrive(oi->driver1->GetY() + oi->driver1->GetX() - oi->driver1->GetZ());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveCommand::Interrupted()
{

}
