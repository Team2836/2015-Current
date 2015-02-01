#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

public:
	Joystick *operator1, *operator2, *driver1;
	JoystickButton *B1OP, *B2OP, *B1DR, *B3OP, *B4OP, *B2DR, *B3DR;

	OI();
};

#endif
