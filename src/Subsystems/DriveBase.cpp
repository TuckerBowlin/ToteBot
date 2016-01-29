#include <Subsystems/DriveBase.h>
#include "../RobotMap.h"


DriveBase::DriveBase() :
		Subsystem("DriveBase")
{
	frontRight = new Talon(FRONT_RIGHT_MOTOR_PORT);
	frontLeft = new Talon(FRONT_LEFT_MOTOR_PORT);
	backRight = new Talon(BACK_RIGHT_MOTOR_PORT);
	backLeft = new Talon(BACK_LEFT_MOTOR_PORT);



}

void DriveBase::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void DriveBase::SetLeftSpeed(float LeftSpeed){

	frontLeft->Set(LeftSpeed);
	backLeft->Set(LeftSpeed);


}
void DriveBase::SetRightSpeed(float RightSpeed){

	frontRight->Set(RightSpeed);
	backRight->Set(RightSpeed);

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

