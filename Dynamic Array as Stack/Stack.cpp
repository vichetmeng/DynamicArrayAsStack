//
//  Stack.cpp
//  Dynamic Array as Stack
//
//  Created by Vichet Meng on 4/13/16.
//  Copyright © 2016 ViMApps. All rights reserved.
//

#include "Stack.h"


// Constructor

template <typename T>
Stack<T>::Stack()
{
    a = new T[50];
    count = 0;
    capacity = 50;
}

template <typename T>
Stack<T>::Stack(int newCapacity)
{
    a = new T[newCapacity];
    count = 0;
    capacity = newCapacity;
}

template <typename T>
int Stack<T>::getCount()
{
    return count;
}

template <typename T>
T Stack<T>::top()
{
    return a[count - 1];
}

template <typename T>
void Stack<T>::pop()
{
    count--;
}

template <typename T>
void Stack<T>::popPointer()
{
    delete a[count - 1];
    count--;
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return count == 0;
}

template <typename T>
void Stack<T>::push(T data)
{
    a[count] = data;
    count++;
}

template <typename T>
Stack<T>::Stack(const Stack<T>& otherStack)
{
    if (&otherStack == this)
        cerr << "Attempted self assignment." << endl;
    else
    {
        if (otherStack.capacity != capacity)
        {
            delete [] a;
            a = new T[otherStack.capacity];
        }
        for(int i = 0; i < otherStack.count; i++)
        {
            a[i] = otherStack.a[i];
        }
    }
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& otherStack)
{
    if (&otherStack == this)
        cerr << "Attempted self assignment." << endl;
    else
    {
        if (otherStack.capacity != capacity)
        {
            delete [] a;
            a = new int[otherStack.capacity];
        }
        for(int i = 0; i < otherStack.count; i++)
        {
            a[i] = otherStack.a[i];
        }
    }
    return *this;
}

// Destructor
template <typename T>
Stack<T>::~Stack()
{
    delete [] a;
}