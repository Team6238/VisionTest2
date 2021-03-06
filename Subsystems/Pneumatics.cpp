#include "Pneumatics.h"
#include "wpilib.h"
#include <iostream>
#define Nsolenoids 2

Pneumatics::Pneumatics() : Subsystem("Pneumatics") {
	compressor = new frc::Compressor(0);
	for (int i = 0; i < Nsolenoids; i++){
		solenoids[i] = new Solenoid(i);
		states[i] = 0;
	}
}

void Pneumatics::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands
void Pneumatics::FlipSolenoid(int i){
	solenoids[i]->Set(states[i]);
	states[i] = !states[i];
}

void Pneumatics::SetShifter(){
	solenoids[0]->Set(0);
}

