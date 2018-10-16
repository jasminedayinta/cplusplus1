//
//  TournamentMember.hpp
//  a5p2
//
//  Created by Jasmine Juwono on 23.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p2.cpp tournamentmember.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef TournamentMember_h
#define TournamentMember_h

#include <stdio.h>
#include <iostream>

using namespace std;

class TournamentMember{
    
private:
    
    static string location;
    
    char *firstName;
    char *lastName;
    char *dateOfBirth;
    string nationality;
    string gender;
    
public:
    
    //constructors functions
    TournamentMember();
    TournamentMember(char* fn, char* ln, char* dob, const string& nationality, const string& gender);
    TournamentMember(const TournamentMember& t);
    
    //destructor for the class
    ~TournamentMember();
    
    //setter methods
    inline void setFirstName(char *firstName){
        
        int i;
        char *c = firstName;
        for(i = 0; *c != '\0'; i++, c++){
            this->firstName[i] = *c;
        }
    }
    
    inline void setLastName(char *lastName){
        
        int i;
        char *c = lastName;
        for(i = 0; *c != '\0'; i++, c++){
            this->lastName[i] = *c;
        }
    }
    
    inline void setDateOfBirth(char *dateOfBirth){
        
        int i;
        char *c = dateOfBirth;
        for(i = 0; *c != '\0'; i++, c++){
            this->dateOfBirth[i] = *c;
        }
    }
    
    inline void setNationality(const string &nationality){
        this->nationality = nationality;
    }
    
    inline void setGender(const string &gender){
        this->gender = gender;
    }
    
    //getter methods
    inline char* getFirstName() const{
        return firstName;
    }
    
    inline char* getLastName() const{
        return lastName;
    }
    
    inline char* getDateOfBirth() const{
        return dateOfBirth;
    }
    
    inline string getNationality() const{
        return this->nationality;
    }
    
    inline string getGender() const{
        return this->gender;
    }
    
    //service methods
    void print() const;
    
    static void locationChange(const string&);
    
};

#endif /* TournamentMember_h */
