#ifndef ToteMagnetControlForward_H
#define ToteMagnetControlForward_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToteMagnetControlForward: public CommandBase
{
public:
	ToteMagnetControlForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
