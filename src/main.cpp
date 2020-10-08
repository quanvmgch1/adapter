#include "../include/uogStudent.h"
#include "../include/aptechStudent.h"
#include "../include/bridgeStudent.h"

#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<UoGStudent*> students;

	//Just create some students
	UoGStudent *s = new BetecStudent("John", "Merit");
	students.push_back(s);

	s = new TopupStudent("Paul", 75);
	students.push_back(s);

	s = new TopupStudent("Mark", 5);
	students.push_back(s);

	for (int i = 0; i < students.size(); i++)
	{
		students[i]->show();
	}

	for (int i = 0; i < students.size(); i++)
	{
		delete students[i];
	} 
}