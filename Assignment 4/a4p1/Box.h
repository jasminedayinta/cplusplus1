//
//  Box.hpp
//  a4p1
//
//  Created by Jasmine Juwono on 13.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p1.cpp Box.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Box_h
#define Box_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Box{
    
    // declaring data members that are private
    private :
    int height, width, depth, total, volume;
   
    
public:
    // constructors
    Box(int h, int w, int d);
    Box();
    
    // setter methods
    void setHeight(int newheight);
    void setWidth(int newwidth);
    void setDepth(int newdepth);
    void setTotal(int newtotal);
    void setVolume(int newvolume);
    
    // getter method
    int getHeight(), getWidth(), getDepth(), getTotal(), getVolume();
    
};

#endif /* Box_hpp */
