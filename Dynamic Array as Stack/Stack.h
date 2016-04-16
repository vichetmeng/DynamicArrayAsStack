//
//  Stack.hpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/13/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

template <typename T>
class Stack
{
public:
    // Constructor
    Stack(); // Capacity defaulting to 50
    Stack(int newCapacity);
    Stack(const Stack<T>& otherStack);
    
    
    // Stack functions
    T top();
    void pop();
    void popPointer();
    void push(T data);
    bool isEmpty();
    int getCount();
    
    // Overloaded assignment operator
    Stack& operator=(const Stack<T>& otherStack);
    
    // Destructor
    ~Stack();
private:
    T *a;
    int capacity;
    int count;
};

#endif /* Stack_hpp */
