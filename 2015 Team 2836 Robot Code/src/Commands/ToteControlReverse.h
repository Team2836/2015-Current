#ifndef ToteControlReverse_H
#define ToteControlReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToteControlReverse: public CommandBase
{
public:
	ToteControlReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
