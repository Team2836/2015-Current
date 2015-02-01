#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Talon *FLT;
	Talon *BLT;
	Talon *FRT;
	Talon *BRT;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveTrain();
	void InitDefaultCommand();
	void FLDrive(float speed);
	void BLDrive(float speed);
	void FRDrive(float speed);
	void BRDrive(float speed);
};

#endif
