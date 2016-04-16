//
//  Motorcycle.cpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#include "Motorcycle.h"


// Constructor
Motorcycle::Motorcycle() {}

Motorcycle::Motorcycle(int year, const string& make, const string& model, MotorcycleType type):Vehicle(year, make, model), type(type){};

// Mutator
void Motorcycle::setMotorcycleType(MotorcycleType newType)
{
    type = newType;
}

void Motorcycle::print(ostream& where) const
{
    where << "Motorcycle" << endl;
    where << "\tYear: " << getYear() << endl;
    where << "\tMake: " << getMake() << endl;
    where << "\tModel: " << getModel() << endl;
    where << "\tType: " << getMotorcycleType() << endl;
}

// Accessor
string Motorcycle::getMotorcycleType() const
{
    switch (type) {
        case MotorcycleTypeNotSet:
            return "N/A";
        case MotorcycleTypeSport:
            return "Sport";
        case MotorcycleTypeCruiser:
            return "Cruiser";
        case MotorcycleTypeOffRoad:
            return "Off-Road";
    }
}

// Destructor
Motorcycle::~Motorcycle() {}