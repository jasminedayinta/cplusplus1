/*CH08-320142
 a6_p4.cpp Area.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef _AREA_H
#define _AREA_H


class Area {
	public:
		Area(const char *n);
		virtual ~Area();
        void setColor(const std::string &a); //setter
        void setSize(const double &s);
        std::string getColor(); //getter
        double getSize();
		virtual double calcArea() const = 0;
        virtual double calcPerimeter() const = 0;
	private:
		char color[11];
        int die;
        int randomNumber;
        std::string arr[4] = {"GREEN", "BLUE", "RED", "YELLOW"}; //initializing the array
};
#endif
