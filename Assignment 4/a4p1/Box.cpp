//
//  Box.cpp
//  a4p1
//
//  Created by Jasmine Juwono on 13.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p1.cpp Box.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(int h, int w, int d){
    height = h;
    width = w;
    depth = d;
}

Box::Box() {
    // empty constructor, so we can declare arrays of Critters
}

//setter methods
void Box::setHeight(int newheight){
    height = newheight;
}

void Box::setWidth(int newwidth){
    width = newwidth;
}

void Box::setDepth(int newdepth){
    depth = newdepth;
}
void Box::setVolume(int newvolume){
    volume = height * width * depth;
}

//getter methods
int Box::getHeight(){
    return height;
}

int Box::getWidth(){
    return width;
}

int Box::getDepth(){
    return depth;
}
int Box::getVolume(){
    return volume;
}
