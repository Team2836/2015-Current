#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ExampleSubsystem: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Talon *t1, *t2, *t3,*t4;
	DigitalInput *ls1, *ls2, *ls3, *ls4;
	Timer *timer, *movetimer;
	ExampleSubsystem();
	void InitDefaultCommand();
	void Sequence();
};

#endif
