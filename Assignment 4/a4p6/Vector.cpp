//
//  Vector.cpp
//  a4p6
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p6.cpp Vector.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

//defining the constructors
Vector::Vector(){
    this->size = 0;
    this->c = NULL;
}

Vector::Vector(const Vector& v){
    this->size = v.size;
    this->c = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->c[i] = v.c[i];
    }
}

Vector::Vector(const int &size, const double *c){
    this->size = size;
    this->c = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->c[i] = c[i];
    }
}

//defining the destructor
Vector::~Vector(){
    delete [] this->c;
    this->size = 0;
}

//defining the getter methods
int Vector::getSize() const{
    return this->size;
}

double* Vector::getComp() const{
    return this->c;
}

//defining the setters
void Vector::setSize(const int &size){
    this->size = size;
    delete [] this->c;
    this->c = new double[this->size];
    cout << "Values deleted \n" << endl;
}

void Vector::setComp(const double *c, const int &size){
    if(size != this->size){
        cout << "Cannot assign \n" << endl;
        return;
    }
    for(int i = 0;  i < this->size; i++){
        this->c[i] = c[i];
    }
}

//calling the service methods
void Vector::print() const{
    for(int i = 0; i < this->size; i++){
        cout << this->c[i] << " " << endl;
    }
    cout << endl;
}

double Vector::z() const{
    double res = 0;
    for(int i = 0; i < this->size; i++){
        res += this->c[i];
    }
    return sqrt(res);
}

Vector Vector::subtraction(const Vector &v) const{
    double *nc = new double[this->size];
    for(int i = 0; i < this->size; i++){
        nc[i] = this->c[i] - v.c[i];
    }
    return Vector(this->size, nc);
}

Vector Vector::addition(const Vector &v) const{
    double *nc = new double[this->size];
    for(int i = 0; i < this->size; i++){
        nc[i] = this->c[i] + v.c[i];
    }
    return Vector(this->size, nc);
}

double Vector::scalar(const Vector &v) const{
    double r = 0;
    for(int i = 0; i < this->size; i++){
        r += this->c[i]*v.c[i];
    }
    return r;
}
