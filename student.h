#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std;

class student
{
    private: string firstName;
             string lastName;
             vector<double> grades;
             double score;

    public: void setName(string , string);
            string fullName();
            void addGrade(double);
            double getScore();
};



#endif
