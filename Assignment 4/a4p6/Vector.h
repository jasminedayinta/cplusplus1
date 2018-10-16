//
//  Vector.hpp
//  a4p6
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p6.cpp Vector.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Vector_h
#define Vector_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Vector{
    private:
        int size;
        double *c;
    
    public:
        //constructors
        Vector();
        Vector(const Vector&);
        Vector(const int&, const double*);
    
    ~Vector(); // destructor
    
    //setter methods
    void setSize(const int&);
    void setComp(const double*, const int&);
    
    //getter methods
    int getSize() const;
    double* getComp() const;
    
    //service methods
    void print() const;
    double z() const;
    Vector subtraction(const Vector&) const;
    Vector addition(const Vector&) const;
    double scalar(const Vector&) const;
    
};

#endif
