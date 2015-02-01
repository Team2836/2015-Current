#include "OI.h"
#include "Commands/ToteMagnetControlForward.h"
#include "Commands/ToteControlReverse.h"
OI::OI()
{
	driver1 = new Joystick(0);
	driver2 = new Joystick(1);
	operator1 = new Joystick(2);
	operator2 = new Joystick(3);

	B1OP = new JoystickButton(operator1, 1);
	B1OP->WhileHeld(new ToteMagnetControlForward());

	B2OP = new JoystickButton(operator1, 2);
	B2OP->WhileHeld(new ToteControlReverse());

	B1DR = new JoystickButton(driver1, 1);
	B1DR->WhileHeld(new ToteControlReverse());
	// Process operator interface input here.
}
