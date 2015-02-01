#ifndef ClawIn_H
#define ClawIn_H

#include "../CommandBase.h"
#include "WPILib.h"

class ClawIn: public CommandBase
{
public:
	ClawIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
