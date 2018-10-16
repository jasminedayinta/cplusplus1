//
//  Complex.hpp
//  a3p6
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p6.cpp Complex.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Complex_h
#define Complex_h

#include <iostream>

using namespace std;

class Complex{
    
private:
    
    int r, i;
    
public:
    
    //declaring constructors
    Complex();
    Complex(const int &r, const int &i);
    
    //declaring a destructor
    ~Complex();
    
    // getter methods
    int getR();
    int getI();
    
    // setter methods
    void setR(const int &r);
    void setI(const int &i);
    
    // service methods
    void print();
    Complex getConjugation();
    Complex addition(const Complex &a);
    Complex subtraction(const Complex &a);
    Complex multiplication(const Complex &a);
    
};

#endif
