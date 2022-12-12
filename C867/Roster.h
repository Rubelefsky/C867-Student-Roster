#pragma once
#include "Student.h"

class Roster
{
private:
	int lastIndex = -1;
	const static int studentDataTable = 5;
	Student* classRosterArray[studentDataTable]; /*Not declared dynmically*/

public:

	void parse(string row); // Parse method goes through a set of comma delimited strings and extracts data of the student

	void add(string sID,
		string sFName,
		string sLName,
		string sEmail,
		int sAge,
		int day1,
		int day2,
		int day3,
		DegreeType dt);
	void printAll(); // Calls the print() medthod in the student class for each student.
	void printByDegreeType(DegreeType dt); //Degree Type passed in
	void printInvalidEmails();
	void printAverageDays(string StudentID); // Prints average days in course
	bool removeStudentByID(string StudentID);
	~Roster(); //Destructor

};



/* 3.  Define the following functions:

a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.

b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.

d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
 

Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
 

f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.*/