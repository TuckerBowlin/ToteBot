#ifndef DRIVE_BASE_H
#define DRIVE_BASE_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveBase: public Subsystem
{
private:
	Talon *frontRight;
	Talon *frontLeft;
	Talon *backRight;
	Talon *backLeft;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveBase();
	void InitDefaultCommand();
	void SetLeftSpeed(float LeftSpeed);
	void SetRightSpeed(float RightSpeed);

};

#endif
