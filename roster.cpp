/*
 *  FileName:       roster.cpp
 *  Project Name:   JYM1
 *  Purpose: Roster class implementation. Contains the class function
 *  definitions.
 *  Created by James Meagher on 19 Mar 2022.
*/

#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Roster::Roster( ){
    *classRosterArray = new string [ARRAY_SIZE];
}

/*
 * parses the given string (e.g., "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY" from studentData).
 * The objective of the classRoster.parse function is to extract all the attributes
 * (i.e., A1, John, Smith, etc.) of the student.
 */
void Roster::parse(string row){
   
    
    /*add(studentID, firstName, lastName, emailAddress,
        age, daysInCourse1, daysInCourse2, daysInCourse3,
        degreeProgram);*/
}


/*
 * Sets the instance variables from student class and updates the roster.
 */
void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
                 int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
                 DegreeProgram degreeProgram){
    
    int *daysToCompleteEachCourse[ ] {&daysInCourse1, &daysInCourse2, &daysInCourse3};
    
    const Student::*Student = new Student::Student(string studentID,
                                                   string firstName,
                                                   string lastName,
                                                   string emailAddress,
                                                   int age,
                                                   int daysToCompleteEachCourse,
                                                   degreeProgram);
    
}

/*
 * Removes students from the roster by student ID. If the student ID does not
 * exist, the function prints an error message indicating that the student was not found.
 */
void Roster::remove(string studentID){ }

/*
 * Prints a complete tab-separated list of student data
 * Loop through all the students in classRosterArray and call the print( )
 * function for each student.
 */
void Roster::printAll( ){
    cout << "Displaying all students: \n";
}

/*
 * Prints a student’s average number of days in the three courses.
 * The student is identified by the studentID parameter.
 */
void Roster::printAverageDaysInCourse(string studentID){ }
    
    
/*
 * Verifies student email addresses and displays all invalid email
 * addresses to the user.
 */
void Roster::printInvalidEmails( ){ }

/*
 * Print out student information for a degree program
 * specificed by an enumerated type
 */
void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
    
}

Roster::~Roster( ){
    delete [] *classRosterArray;
    cout << "Done \n";
}

