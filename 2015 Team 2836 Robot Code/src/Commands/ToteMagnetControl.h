#ifndef ToteMagnetControl_H
#define ToteMagnetControl_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToteMagnetControl: public CommandBase
{
public:
	ToteMagnetControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
