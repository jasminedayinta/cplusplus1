//
//  Creature.hpp
//  a4p4
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p4.cpp Creature.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef Creature_h
#define Creature_h

#include <stdio.h>

//declaring the public destructors in each class
class Creature {
    public:
        Creature();
        void run() const;
        ~Creature();
    
    protected:
        int distance;
};

class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
        ~Wizard();
    
    private:
        int distFactor;
};

class Sleeping : public Creature{
    public:
        Sleeping();
        void hours();
        ~Sleeping();
    
    private:
        int sleepinghours;
};

class Pace : public Creature {
    public:
        Pace();
        void speed();
        ~Pace();
    
    private:
        int fastness;
};

#endif
