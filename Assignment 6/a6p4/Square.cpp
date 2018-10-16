//
//  Square.cpp
//  a6p3
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a6_p4.cpp Square.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Square.h"
#include <iostream>

Square::Square(const char *n, double a) : Area(n) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return length * length;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return 4 * length;
}
