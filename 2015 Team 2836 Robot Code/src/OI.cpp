#include "OI.h"
#include "Commands/ToteMagnetControlForward.h"
#include "Commands/ToteControlReverse.h"
#include "Commands/ClawIn.h"
#include "Commands/ClawOut.h"
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

	B3OP = new JoystickButton(operator2, 1);
	B3OP->WhileHeld(new ClawIn());

	B4OP = new JoystickButton(operator2 ,2);
	B4OP->WhileHeld(new ClawOut());

	B1DR = new JoystickButton(driver1, 1);
	B1DR->WhileHeld(new ToteControlReverse());

	// Process operator interface input here.
}
