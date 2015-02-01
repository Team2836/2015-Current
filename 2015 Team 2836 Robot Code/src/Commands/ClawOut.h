#ifndef ClawOut_H
#define ClawOut_H

#include "../CommandBase.h"
#include "WPILib.h"

class ClawOut: public CommandBase
{
public:
	ClawOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
