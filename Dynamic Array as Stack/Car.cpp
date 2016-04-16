//
//  Car.cpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#include "Car.h"

Car::Car():Vehicle()
{
    driveTrain = DriveTrainNotSet;
    transmission = TranmissionNotSet;
}

Car::Car(int year, string make, string model,
         DriveTrain driveTrain, Transmission transmission):Vehicle(year, make, model), driveTrain(driveTrain), transmission(transmission) {}

void Car::setDriveTrain(DriveTrain newDriveTrain)
{
    driveTrain = newDriveTrain;
}

void Car::print(ostream& where) const
{
    
    where << "Car" << endl;
    where << "\tYear: " << getYear() << endl;
    where << "\tMake: " << getMake() << endl;
    where << "\tModel: " << getModel() << endl;
    where << "\tDrive Train: " << getDriveTrain() << endl;
    where << "\tTransmission: " << getTransmission() << endl;
}

void Car::setTransmission(Transmission newTranmission)
{
    transmission = newTranmission;
}

string Car::getDriveTrain() const
{
    switch (driveTrain) {
        case DriveTrainNotSet:
            return "N/A";
        case DriveTrainAllWheel:
            return "AWD";
        case DriveTrainRearWheelDrive:
            return "RWD";
        case DriveTrainFrontWheelDrive:
            return "FWD";
    }
}

string Car::getTransmission() const
{
    switch (transmission) {
        case TranmissionNotSet:
            return "N/A";
        case TransmissionManual:
            return "Manual";
        case TransmissionAutomatics:
            return "Automatics";
        case TransmissionDualClutch:
            return "Dual Clutch";
    }
}

Car::~Car()
{
    
}