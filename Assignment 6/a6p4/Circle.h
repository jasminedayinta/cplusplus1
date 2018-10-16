/*CH08-320142
 a6_p4.cpp Circle.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
        double calcPerimeter() const;
	private:
		double radius;
};

#endif
