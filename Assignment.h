//Christian Nissen
//cant4f@mail.umkc.edu
//uses Date.h and StringTokenizer.h classes provided by instructor
//test test s key not working right

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>
#include "Date.h"
//#include "AssignStatus.h" //took out because i think i found a better way to do the enum
using namespace std;

enum AssignStatus{Assigned,Complete,Late};

class Assignment
{
public:
	Assignment();
	Assignment(string due, string descrip, string assigned, AssignStatus status);//should i change to allow status to be passed in as string?
	Assignment(const Assignment& original); //copy constructor to make placing assignment in a different list easier
	AssignStatus getStatus();
	const string getStringStatus();//added so that you could also have a string value for printing
	const string GetdueDate();
	const string GetAssignDate();
	const string getDescription();
	void completeAssignment(Date completeDate);
	void changeDescription(string newDescrip);
	void changeDueDate(string newDueDate);
	bool operator <(const Assignment& other) const;
	bool operator ==(const Assignment& other) const;
private:
	string Description;
	AssignStatus AssignmentStatus;
	Date DueDate;
	Date AssignDate;
	bool DatesValid();
};
#endif
