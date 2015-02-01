#ifndef CameraControl_H
#define CameraControl_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class CameraControl: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	CameraControl();
	void InitDefaultCommand();
	void FrontCamera();
	void BackCamera();
};

#endif
