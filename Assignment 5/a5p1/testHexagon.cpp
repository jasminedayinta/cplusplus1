//
//  main.cpp
//  a5p1
//
//  Created by Jasmine Juwono on 19.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p1.cpp testHexagons.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Shapes.h"

int main() {
    
    Hexagon x, y;
    double d, e;
    string m, n;
    
    m = "red";
    d = 2;
    x.setSide(d);
    x.setColor(m);
    
    n = "yellow";
    e = 10;
    y.setSide(e);
    y.setColor(n);
    
    Hexagon copy(y);
    
    cout << "Perimeter of first hexagon: " << x.Perimeter() << endl;
    cout << "Area of first hexagon: " << x.Area() << endl;
    cout << "\n" << endl;
    cout << "Perimeter of second hexagon: " << y.Perimeter() << endl;
    cout << "Area of second hexagon: " << y.Area() << endl;
    cout << "\n" << endl;
    cout << "Perimeter of the copy hexagon: " << copy.Perimeter() << endl;
    cout << "Area of the copy hexagon: " << copy.Area() << endl;
    cout << "\n" << endl;
    
    return 0;
}
