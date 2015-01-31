#ifndef ToteMagnet_H
#define ToteMagnet_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ToteMagnet: public Subsystem
{
private:
	Talon *t5;
	DigitalInput *ls4tote;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ToteMagnet();
	void InitDefaultCommand();
	void MoveTalonIn(float speed, int whichjoystick);
	void MoveTalonOut(float speed);

};

#endif
