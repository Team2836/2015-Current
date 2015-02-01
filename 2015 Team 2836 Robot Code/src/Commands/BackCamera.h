#ifndef BackCamera_H
#define BackCamera_H

#include "../CommandBase.h"
#include "WPILib.h"

class BackCamera: public CommandBase
{
public:
	BackCamera();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
