#ifndef FrontCamera_H
#define FrontCamera_H

#include "../CommandBase.h"
#include "WPILib.h"

class FrontCamera: public CommandBase
{
public:
	FrontCamera();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
