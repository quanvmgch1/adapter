#include "../include/uogStudent.h"

UoGStudent::UoGStudent(const string &name)
{
    this->name = name;
}
string UoGStudent::getName() const
{
    return name;
}
void UoGStudent::show() const
{
    cout << "Student: " <<name<< ", grade " << getGrade() << endl;
}
UoGStudent::~UoGStudent()
{
    //nothing to do
}

BetecStudent::BetecStudent(const string &name, const string &grade) : UoGStudent(name)
{
    this->grade = grade;
}
string BetecStudent::getGrade() const
{
    return grade;
}

TopupStudent::TopupStudent(const string &name, const int &grade) : UoGStudent(name)
{
    this->grade = grade;
}
string TopupStudent::getGrade() const
{
    if(grade < 40) return "Failed";
    if(grade < 60) return "Pass";
    if(grade < 80) return "Merit";
    
    return "Distinction";
}