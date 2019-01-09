#pragma once

#include <frc/WPILib.h>
#include <BlitzLib/BlitzLib.hpp>


class Robot : public frc::SampleRobot 
{
    public:
        Robot();

        void RobotInit() override;
        void Autonomous() override;
        void OperatorControl() override;
        void Test() override;

    private:
  
};
