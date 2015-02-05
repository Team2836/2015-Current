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
	bool OPuse;
	bool DRbutton = oi->driver1->GetTrigger();
	if(oi->operator1->GetZ() > -.4 && oi->operator1->GetZ() < .4)
	{
		bool OPuse = false;
	}
	else
	{
		bool OPuse = true;
	}
	if(OPuse == false && DRbutton == true)
	{
		totemagnet->MoveTalon(-1, 1);
	}
	else if(OPuse == true)
	{
		totemagnet->MoveTalon(-(oi->operator1->GetZ()), 2);
	}

	//totemagnet->MoveTalon((oi->operator1->GetZ()));
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
