#ifndef DriveToTarget_H
#define DriveToTarget_H

#include "wpilib.h"

class DriveToTarget : public Command {
public:
	DriveToTarget();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveToTarget_H