#include "ExampleSubsystem.h"
#include "../RobotMap.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	lside = new Talon(0);
	rside = new Talon(1);
}

void ExampleSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void ExampleSubsystem::MLside(float speed)
{
	lside->Set(speed);
}
void ExampleSubsystem::MRside(float speed)
{
	rside->Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

