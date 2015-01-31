#include "OI.h"

OI::OI()
{
	driver1 = new Joystick(0);
	driver2 = new Joystick(1);
	operator1 = new Joystick(2);
	operator2 = new Joystick(3);
	// Process operator interface input here.
}
