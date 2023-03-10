/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/BeakCommand.h"
#include "Robot.h"


BeakCommand::BeakCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::m_beak);
}

// Called just before this Command runs the first time
void BeakCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void BeakCommand::Execute() {

  Robot::m_beak.GoBeak();

}

// Make this return true when this Command no longer needs to run execute()
bool BeakCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void BeakCommand::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BeakCommand::Interrupted() {}
