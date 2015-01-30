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
	Talon *lside, *rside;
	ExampleSubsystem();
	void InitDefaultCommand();
	void MLside(float speed);
	void MRside(float speed);

};

#endif
