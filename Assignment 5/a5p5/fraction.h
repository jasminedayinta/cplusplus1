//
//  fraction.hpp
//  a5p5
//
//  Created by Jasmine Juwono on 22.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p5.cpp fraction.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef fraction_h
#define fraction_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Fraction {
    
private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator
    
    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);
    
public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    // integers. Denominator by default is 1
    
    //using friend function to print out results
    friend ostream& operator<<(ostream& out, const Fraction &a);
    // receiving input
    friend istream& operator>>(istream& in, Fraction &a);
    
    //creating the multiplication function
    Fraction operator*(const Fraction &f);
    
    //creating the division function
    Fraction operator/(const Fraction &f);

};

#endif /* fraction_h */
