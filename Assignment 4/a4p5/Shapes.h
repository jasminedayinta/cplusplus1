//
//  Shapes.hpp
//  a4p5
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p5.cpp Shapes.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Shapes_hpp
#define Shapes_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Shape {			// base class
    private:   				// private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();					// empty shape
        Shape(const Shape&);		// copy constructor
        void printName() const ;  	// prints the name
        void setName(const string &s); // setter method
        string getName();           //getter method
};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
        void move(double, double);	// moves the shape, i.e. it modifies it center
        void setX(const double &x); //setter methods
        void setY(const double &y);
        double getX();              //getter methods
        double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private:
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(const int &EdgesNumber); //setter method
        int getEdgesNumber(); //getter method
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
        void setRadius(const double &Radius); //setter method
        double getRadius(); //getter method
        double perimeter(); //service methods
        double area();
};

class Rectangle : public RegularPolygon{
    private:
        double width;
        double height;
    
    public:
        Rectangle();
        Rectangle(const Rectangle&);
        Rectangle(const string &n, double nx, double ny, double nwidth,
              double nheight);
        void setWidth(const double &width); //setter methods
        void setHeight(const double &height);
        double getWidth(); //getter methods
        double getHeight();
        double perimeter(); //service methods
        double area();
    
};

class Square : public Rectangle{
    public:
        Square();
        Square(const Square&);
        Square(const string &n, double nx, double ny, double nside);
};
#endif
