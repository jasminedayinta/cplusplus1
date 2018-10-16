//
//  Complex.cpp
//  a3p6
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p6.cpp Complex.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

//defining constructor methods

Complex::Complex(){
    cout << "The empty constructor: \n" << endl;
    this->r = 0;
    this->i = 0;
}

Complex::Complex(const int &r, const int &i){
    cout << "First Constructor: \n" << endl;
    this->r = r;
    this->i = i;
}

Complex::~Complex(){
    cout << "Object deleted\n" << endl;
}


//calling the getter methods
int Complex::getR(){
    return this->r;
}

int Complex::getI(){
    return this->i;
}

//defining the setter methods
void Complex::setR(const int &r){
    this->r = r;
}

void Complex::setI(const int &i){
    this->i = i;
}

// service methods
void Complex::print(){
    string a, b;
    a = "";
    b = "+";
    if(this->r < 0){
        a = "-";
    }
    
    if(this->i < 0){
        b = "-";
    }
    cout << a << abs(this->r) << " " << b << " " << abs(this->i)
    << "i" << endl;
}

Complex Complex::getConjugation(){
    return Complex(this->r, -this->i);
}

Complex Complex::addition(const Complex &a){
    return Complex(this->r + a.r, this->i + a.i);
}

Complex Complex::subtraction(const Complex &a){
    return Complex(this->r - a.r, this->i - a.i);
}

Complex Complex::multiplication(const Complex &a){
    return Complex((this->r * a.r) - this->i * a.i, this->r * a.i +
                   a.r * this->i);
}
