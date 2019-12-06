#include "student.h"



using namespace std;

void student::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string student::fullName()
{
    string full = firstName.append(" ");
    full.append(lastName);
    return full;
}

void student::addGrade(double gradeInput)
{
    grades.push_back(gradeInput);
}

double student::getScore()
{
    double sum = 0.0;
    for(int index = 0; index<grades.size(); index++)
    {
        sum += grades[index];
    }
    return sum/grades.size();
}
