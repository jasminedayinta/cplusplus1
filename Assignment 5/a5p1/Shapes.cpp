//
//  Shapes.cpp
//  a5p1
//
//  Created by Jasmine Juwono on 19.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p1.cpp Shapes.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Shapes.h"
#include <iostream>
#include <math.h>

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
    cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
    Radius = r;
}

//defining constructor methods
Hexagon::Hexagon() : RegularPolygon("", 0, 0, 6){
    side = 0;
    color ='\0';
}

Hexagon::Hexagon(const string& color, const double side) : RegularPolygon("", 0, 0, 6){
    this->color = color;
    this->side = side;
}

Hexagon::Hexagon(const Hexagon& n) : RegularPolygon("", 0, 0, 6){
    this->color = n.color;
    this->side = n.side;
}
Hexagon:: ~Hexagon(){

}

//calling getter methods
double Hexagon::getSide(){
    return this->side;
}

string Hexagon::getColor(){
    return this->color;
}

//defining the setter methods
void Hexagon::setSide(const double side){
    this->side = side;
}

void Hexagon::setColor(string color){
    this->color = color;
}

//calculating the area and perimeter
double Hexagon::Area(){
    return (((3 * sqrt(3))/2) * (side * side));
}

double Hexagon::Perimeter(){
    return (6 * side);
}
