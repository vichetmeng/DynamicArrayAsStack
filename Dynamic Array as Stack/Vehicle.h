//
//  Vehicle.h
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/15/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#ifndef Vehicle_H
#define Vehicle_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
    friend ostream& operator<<(ostream& out, const Vehicle& vehicle);
public:
    Vehicle();
    Vehicle(int year, string make, string model);
    
    int getYear() const;
    string getMake() const;
    string getModel() const;
    
    void setYear(int newYear);
    void setMake(string newMake);
    void setModel(string newModel);
    
    virtual void print(ostream& where) const{};
    
    virtual ~Vehicle(){};
    
private:
    int year;
    string make;
    string model;
};

#endif /* Vehicle_H */
