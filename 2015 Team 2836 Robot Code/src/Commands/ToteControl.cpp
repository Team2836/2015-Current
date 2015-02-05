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
	totemagnet->MoveTalon((oi->operator1->GetZ()));
}

// Make this return true when this Command no longer needs to run execute()
bool ToteControl::IsFinished()
{
	return false;
}


void ToteControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToteControl::Interrupted()
{

}
