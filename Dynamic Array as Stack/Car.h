//
//  Car.h
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#ifndef Car_H
#define Car_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

enum Transmission
{
    TranmissionNotSet= 0, TransmissionManual, TransmissionAutomatics, TransmissionDualClutch
};

enum DriveTrain
{
    DriveTrainNotSet = 0, DriveTrainAllWheel, DriveTrainRearWheelDrive, DriveTrainFrontWheelDrive
};

class Car:public Vehicle
{
public:
    
    // Constructor
    Car();
    Car(int year, string make, string model, DriveTrain driveTrain, Transmission transmission);
    
    // Mutators
    void setDriveTrain(DriveTrain newDriveTrain);
    void setTransmission(Transmission newTranmission);
    
    // Defining virtual function from parent class
    void print(ostream& where) const;
    
    // Accessors
    string getDriveTrain() const;
    string getTransmission() const;
    
    // Destructor
    ~Car();
private:
    DriveTrain driveTrain;
    Transmission transmission;
};

#endif /* Car_H */
