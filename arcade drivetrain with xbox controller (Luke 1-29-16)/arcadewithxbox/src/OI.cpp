#include "OI.h"
#include "Commands/moveback.h"
OI::OI()
{
	xcontroller = new Joystick(0);
	Abutton = new JoystickButton(xcontroller, 1);
	Abutton->WhileHeld(new moveback());
	// Process operator interface input here.
}
