//
//  Motorcycle.h
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#ifndef Motorcycle_H
#define Motorcycle_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

enum MotorcycleType
{
    MotorcycleTypeNotSet = 0, MotorcycleTypeOffRoad, MotorcycleTypeSport, MotorcycleTypeCruiser
};

class Motorcycle: public Vehicle
{
public:
    // Constructor
    Motorcycle();
    Motorcycle(int year, const string& make, const string& model, MotorcycleType type);
    
    // Mutator
    void setMotorcycleType(MotorcycleType newType);
    
    // Accessor
    string getMotorcycleType() const;
    
    // Defining virtual function from parent class
    void print(ostream& where) const;
    
    // Destructor
    ~Motorcycle();
    
private:
    MotorcycleType type;
};

#endif /* Motorcycle_H */
