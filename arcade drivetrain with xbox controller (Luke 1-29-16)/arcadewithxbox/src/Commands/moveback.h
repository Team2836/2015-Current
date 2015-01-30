#ifndef moveback_H
#define moveback_H

#include "../CommandBase.h"
#include "WPILib.h"

class moveback: public CommandBase
{
public:
	moveback();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
