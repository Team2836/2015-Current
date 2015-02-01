#include "ToteControl.h"
#include "math.h"
ToteControl::ToteControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(totemagnet);
}

// Called just before this Command runs the first time
void ToteControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToteControl::Execute()
{
	float operatorZ = abs(oi->operator1->GetZ());
	bool DRControl = oi->driver1->GetRawButton(1);
	if(operatorZ> .4)
	{
		float speed =-(oi->operator1->GetY());
		totemagnet->MoveTalon(speed, 1);
	}
	if(operatorZ > .4 && DRControl == 1)
	{
		totemagnet->MoveTalon(-1, 2);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ToteControl::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ToteControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToteControl::Interrupted()
{

}
