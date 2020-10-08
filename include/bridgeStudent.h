#pragma once

#include "aptechStudent.h"
#include "uogStudent.h"

class BridgeStudent : public UoGStudent
{
    private:
        AptechStudent *student; // use pointer for dynamically allocation
    public:
        BridgeStudent(const string &name, const int &score); // init pointer student here
        string getGrade() const;
        ~BridgeStudent(); // will delete pointer student here
};