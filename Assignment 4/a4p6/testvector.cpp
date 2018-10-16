//
//  main.cpp
//  a4p6
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p6.cpp testvector.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Vector.h"

using namespace std;

//calling the functions in the vector.cpp file
int main(){
    
    Vector x;
    x.setSize(10);
    double c[] = {2, 4, 6, 8, 10};
    x.setComp(c, 8);
    
    Vector y(x);
    Vector z(3, c);
    
    cout << x.z() << endl;
    (x.addition(z)).print();
    (x.subtraction(z)).print();
    cout << x.scalar(z) << endl;

    return 0;
}
