#ifndef Claw_H
#define Claw_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Claw: public Subsystem
{
private:
	Talon *t6;
	DigitalInput *ls1forclaw, *ls2forclaw, *ls3forclaw;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Claw();
	void InitDefaultCommand();
};

#endif
