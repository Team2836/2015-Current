#include "OI.h"
#include "Commands/ExampleCommand.h"
OI::OI()
{
	xbox = new Joystick(0);
	Abutton = new JoystickButton(xbox, 1);
	Abutton->WhenPressed(new ExampleCommand());

	// Process operator interface input here.
}
