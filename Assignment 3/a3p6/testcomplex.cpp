//
//  main.cpp
//  a3p6
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p6.cpp testcomplex.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    
    int r, i;
    cout << "Enter a real number: " << endl;
    cin >> r;
    cout <<"Enter an imaginary number: " << endl;
    cin >> i;
    Complex a(r, i);
    Complex b;
    cin >> r;
    cin >> i;
    b.setR(r);
    b.setI(i);
    
    //first step
    Complex conjugateofa = a.getConjugation();
    conjugateofa.print();
    
    //second step
    Complex total = a.addition(b);
    total.print();
    
    //third step
    Complex difference = a.subtraction(b);
    difference.print();
    
    //fourth step
    Complex product = a.multiplication(b);
    product.print();
    
    return 0;
}
