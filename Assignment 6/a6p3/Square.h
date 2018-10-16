//
//  Square.hpp
//  a6p3
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a6_p3.cpp Square.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include "Area.h"

class Square : public virtual Area {
public:
    Square(const char *n, double a);
    ~Square();
    double calcArea() const;
    double calcPerimeter() const;
    
private:
    double length;
};


#endif /* Square_h */

