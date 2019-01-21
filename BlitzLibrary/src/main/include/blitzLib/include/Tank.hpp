#pragma once

#include <frc/WPILib.h>

#include "DataTypes.hpp"
#include "BlitzLogger.hpp"
#include "DriveReferences.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Tank
    {
        public:
            Tank(Blitz::Models::DriveMotors *Motors,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->Motors = Motors;
            }

            void SetMotorDirection(int Motor, int dir);
            void TuneF(int MotorID, double FGain);
            void TuneP(int MotorID, double PGain);
            void TuneI(int MotorID, double IGain);
            void TuneD(int MotorID, double DGain);

            void Initialize(Blitz::Models::TankInput *Input);
            double* Run();
            void Close();
            
            bool UsePID = false;

        private:
            Blitz::BlitzLogger *Logger;
            Blitz::Models::TankInput *InputData;
            Blitz::Models::DriveMotors *Motors;
            int MotorDirs[4] = {1, 1, 1, 1};
    };
}