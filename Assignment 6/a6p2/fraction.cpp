//
//  fraction.cpp
//  a6p2
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a6_p2.cpp fraction.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if(b > a){
        return gcd(a, b);
    }
    
    if(b == 0){
        return a;
    }
    
    return gcd(a % b, b);
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
    
}

ostream& operator<<(ostream &out, const Fraction &a)
{
    cout << a.num << "/" << a.den;
    return out;
}

istream& operator>>(istream &in, Fraction &a) {
    char c;
    in >> a.num >> c >> a.den;
    return in;
}

//defining all the fraction methods for the different calculations
Fraction Fraction::operator*(const Fraction &f) {
    int nn = this->num*f.num;
    int nd = this->den*f.den;
    int g = gcd(nn, nd);
    
    nn /= g;
    nn /= g;
    
    return Fraction(nn, nd);
}

Fraction Fraction::operator/(const Fraction &f) {
    int nn = this->num*f.den;
    int nd = this->den*f.num;
    int g = gcd(nn, nd);
    
    nn /= g;
    nd /= g;
    
    return Fraction(nn, nd);
}

Fraction Fraction::operator+(const Fraction &f){
    int nn = this->num*f.den;
    int nd = this->den*f.num;
    int g = lcm(nn, nd);

    nn += g;
    nd += g;
    
    return Fraction(nn, nd);
}

Fraction Fraction::operator-(const Fraction &f){
    int nn = this->num*f.den;
    int nd = this->den*f.num;
    int g = lcm(nn, nd);
    
    nn -= g;
    nd -= g;
    
    return Fraction(nn, nd);
}

