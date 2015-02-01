#include "DriveTrain.h"
#include "../RobotMap.h"
#include "math.h"
#include "../Commands/DriveCommand.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{
	FLT = new Talon(2);
	BLT = new Talon(3);
	FRT = new Talon(1);
	BRT = new Talon(0);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveCommand());

}
void DriveTrain::FLDrive(float speed)
{
	if(abs(speed) < .2)
	{
		FLT->Set(0);
	}
	else
	{
		FLT->Set(speed);
	}
}
void DriveTrain::BLDrive(float speed)
{
	if(abs(speed) < .2)
	{
		BLT->Set(0);
	}
	else
	{

		BLT->Set(speed);
	}
}
void DriveTrain::FRDrive(float speed)
{
	if(abs(speed) < .2)
	{
		FRT->Set(0);
	}
	else
	{
		FRT->Set(speed);
	}
}
void DriveTrain::BRDrive(float speed)
{
	if(abs(speed) < .2)
	{
		BRT->Set(0);
	}
	else
	{
		BRT->Set(speed);
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.



