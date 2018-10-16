//
//  Shapes.hpp
//  a5p1
//
//  Created by Jasmine Juwono on 19.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p1.cpp Shapes.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Shapes_h
#define Shapes_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Shape {			// base class
private:   				// private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();					// empty shape
    Shape(const Shape&);		// copy constructor
    void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
private:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);
    void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
};

//adding the class Hexagon
class Hexagon : public RegularPolygon {
private:
    double side;
    std::string color;
public:
    Hexagon();
    Hexagon(const std::string&, double);
    Hexagon(const Hexagon&);
    ~Hexagon();
    
    double Area();
    double Perimeter();
    
    //getter methods
    double getSide();
    std::string getColor();
    
    //setter methods
    void setSide(const double side);
    void setColor(std::string color);
    
    // service methods
    void print();
  
};

#endif /* Shapes_h */
