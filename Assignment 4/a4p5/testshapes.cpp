//
//  main.cpp
//  a4p5
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p5.cpp testshapes.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main() {
    
    Circle c("Cricle", 0, 1, 2);
    Rectangle r("Rectangle", 3, 4, 5, 6);
    Square s("Square", 7, 8, 9);
    
    c.printName();
    cout << "The area is " << c.area() << ". The perimeter is " << c.perimeter() << " ." << endl;
    
    r.printName();
    cout << "The area is " << r.area() << ". The perimeter is " << r.perimeter() << " ." << endl;
    
    s.printName();
    cout << "The area is " << s.area() << ". The perimeter is " << s.perimeter() << " ." << endl;
    
    return 0;
}
