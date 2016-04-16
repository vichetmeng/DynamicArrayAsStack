//
//  main.cpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/13/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {

//    Stack<int> intStack;
//    intStack.push(4);
//    intStack.push(8);
//    while(!intStack.isEmpty())
//    {
//        cout << intStack.top() << endl;
//        intStack.pop();
//    }
    
    
    
    Stack<Vehicle *> stack;
    stack.push(new Car(2013, "Scion", "FR-S",
                   DriveTrainRearWheelDrive, TransmissionManual));
    stack.push(new Car(2006, "Honda", "CR-V", DriveTrainRearWheelDrive, TransmissionAutomatics));
    stack.push(new Motorcycle(2015, "BMW", "AZP43", MotorcycleTypeOffRoad));
    
    cout << "The stack is\n" << endl;
    
    while(!stack.isEmpty())
    {
        cout << *stack.top() << endl;
        stack.popPointer();
    }
    
    cout << add(2.0, 3.0) << endl;
    
    cout << endl;
    return 0;
}
