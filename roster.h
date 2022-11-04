/*
 *  FileName:       roster.h
 *  Project Name:   JYM1
 *  Purpose: Roster class specification. Contains the class definition, including
 *  data members and member function declarations.
 *  Created by James Meagher on 19 Mar 2022.
 */

#ifndef _ROSTER_H_
#define _ROSTER_H_

#include "student.h"

class Roster{
private:
    static const int ARRAY_SIZE {5};
    
    string *classRosterArray[ARRAY_SIZE] {nullptr};
    
public:
    Roster( );
    
    void parse(string row);
    
    void add(string studentID,
             string firstName,
             string lastName,
             string emailAddress,
             int age,
             int daysInCourse1,
             int daysInCourse2,
             int daysInCourse3,
             DegreeProgram degreeProgram);
    
    void remove(string studentID);
    
    void printAll( );
    
    void printAverageDaysInCourse(string studentID);

    void printInvalidEmails( );
    
    void printByDegreeProgram(DegreeProgram degreeProgram);
    
    ~Roster( );
};

#endif /* roster_h */
