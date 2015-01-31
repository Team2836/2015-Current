#ifndef ToteMagnet_H
#define ToteMagnet_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ToteMagnet: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ToteMagnet();
	void InitDefaultCommand();
};

#endif
