#ifndef lsticky_H
#define lsticky_H

#include "../CommandBase.h"
#include "WPILib.h"

class lsticky: public CommandBase
{
public:
	lsticky();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
