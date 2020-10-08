#include "../include/aptechStudent.h"

AptechStudent::AptechStudent(const string &name, const int &score)
{
    this->name = name;
    this->score = score;
}
int AptechStudent::getScore() const
{
    return score;
}