//
//  Array.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/2/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Array_h
#define Array_h
#include <assert.h> //Used for validating user supplied data.
#include <iostream> //Used for tracing and debug statements.

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constuctor
    Array<type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (cons Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
}
#endif /* Array_h */
