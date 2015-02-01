#ifndef ToteControl_H
#define ToteControl_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToteControl: public CommandBase
{
public:
	ToteControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
