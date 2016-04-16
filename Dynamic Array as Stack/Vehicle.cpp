//
//  Vehicle.cpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#include "Vehicle.h"

Vehicle::Vehicle():year(-1), make("N/A"), model("N/A"){}
Vehicle::Vehicle(int year, string make, string model):year(year), make(make), model(model) {}

int Vehicle::getYear() const
{
    return year;
}

string Vehicle::getMake() const
{
    return make;
}

string Vehicle::getModel() const
{
    return model;
}

void Vehicle::setYear(int newYear)
{
    year = newYear;
}

void Vehicle::setMake(string newMake)
{
    make = newMake;
}

void Vehicle::setModel(string newModel)
{
    model = newModel;
}

ostream& operator<<(ostream& out, const Vehicle& vehicle)
{
    vehicle.print(out);
    return out;
}