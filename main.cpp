/*
 *  FileName:       main.cpp
 *  Project Name:   JYM1
 *  Purpose: main function
 *  Created by James Meagher on 19 Mar 2022.
*/

#include "roster.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main( ){
    const int ARRAY_SIZE {5};
    
    const string studentDat[ARRAY_SIZE]
    {"A1, John, Smith, John1989@gm ail.com, 20, 30, 35, 40, SECURITY",
     "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
     "A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
     "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
     "A5, James, Meagher, jmeag10@student.wgu.edu, 48, 50, 30, 30, SOFTWARE"};
    
    cout << "C867-Scripting & Programming: Applications \n";
    cout << "Language: C++ 17 \n";
    cout << "Student ID: 002635926 \n";
    cout << "Name: James Meagher \n";
    
    Roster classRoster;
    
    classRoster.parse(studentDat);
    
    classRoster.printAll( );
    
    classRoster.printInvalidEmails( );
    
    // classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");
    
    classRoster.printAll( );
    
    classRoster.remove("A3");
    
    return 0;
}
