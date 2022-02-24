#include <iostream>
#include <string>
#include "decisions.h"
using namespace std;

int main()
{
	int grade;
	string letterGrade;

	cout << "Enter a number grade, please. " << endl;
	cin >> grade;

	if (grade > 100 || grade < 0)
	{
		cout << "Invalid grade. Please input a number between 1 and 100. ";
		return main();

	};
 
	letterGrade =getLetterGradeUsingIf(grade);

	cout << "Your grade, calculated using an if/else statement is " <<letterGrade<< "." << endl;\

	letterGrade = getLetterGradeUsingSwitch(grade);
	
	cout << "Your grade, calculated using a switch statement is " << letterGrade << "." << endl;

	return 0;
};

