#pragma once

#include <iostream>
#include <string>

using namespace std;

class UoGStudent
{
    protected:
        string name;
    public:
        UoGStudent(const string &name);
        string getName() const;
        virtual string getGrade() const = 0; // pure virtual method(or abstract method)
        void show() const;

        virtual ~UoGStudent(); // virtual destructor

};

class BetecStudent : public UoGStudent
{
    private:
        string grade;
    public:
        BetecStudent(const string &name, const string &grade);
        string getGrade() const;
};

class TopupStudent : public UoGStudent
{
    private:
        int grade;
    public:
        TopupStudent(const string &name, const int &grade);
        string getGrade() const;
};