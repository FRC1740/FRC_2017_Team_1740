#include "GearLight.h"

GearLight::GearLight() {
	// Use Requires() here to declare subsystem dependencies
	Requires(utility);
}

// Called just before this Command runs the first time
void GearLight::Initialize()
{
		utility->gearLightOn();
}

// Called repeatedly when this Command is scheduled to run
void GearLight::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool GearLight::IsFinished()
{
	if (oi->gearLightButton->Get())
		return false;
	else
		return true;
}

// Called once after isFinished returns true
void GearLight::End()
{
	utility->gearLightOff();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GearLight::Interrupted()
{
	utility->gearLightOff();
}
