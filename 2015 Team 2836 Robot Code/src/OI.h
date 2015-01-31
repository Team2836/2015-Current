#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

public:
	Joystick *operator1, *operator2, *driver1, *driver2;

	OI();
};

#endif
