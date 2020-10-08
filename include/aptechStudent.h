#pragma once

#include <iostream>
#include <string>

using namespace std;

class AptechStudent
{
    protected:
        string name;
        int score;
    public:
        int getScore() const;
        AptechStudent(const string &name, const int &score);
};