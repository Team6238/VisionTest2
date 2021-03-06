#include "FlipShifter.h"
#include "../Robot.h"

FlipShifter::FlipShifter() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::pneumatics);
}

// Called just before this Command runs the first time
void FlipShifter::Initialize() {
	Robot::pneumatics.SetShifter();
}

// Called repeatedly when this Command is scheduled to run
void FlipShifter::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool FlipShifter::IsFinished() {
	return 1;
}

// Called once after isFinished returns true
void FlipShifter::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FlipShifter::Interrupted() {

}
