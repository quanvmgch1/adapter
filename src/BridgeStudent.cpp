#include "../include/uogStudent.h"
#include "../include/aptechStudent.h"
#include "../include/bridgeStudent.h"

BridgeStudent::BridgeStudent(const string &name, const int &score) : UoGStudent(name)
{
    student = new AptechStudent(name, score);
}
string BridgeStudent::getGrade() const
{
    if (student->getScore() < 5) return "Failed";
    if (student->getScore() < 7) return "Pass";
    if (student->getScore() < 9) return "Merit";

    return "Distinction";
}
BridgeStudent::~BridgeStudent()
{
    delete student;
}