#include <string>
#include "decisions.h"
using namespace std;

string getLetterGradeUsingIf(int grade)
{
	string letterGrade;

	if (grade < 90 && grade >= 80)
	{
		letterGrade = "B";
	}
	else if (grade < 80 && grade >= 70)
		letterGrade = "C";
	else if (grade < 70 && grade >= 60)
		letterGrade = "D";
	else if (grade < 60)
		letterGrade = "F";

	else letterGrade = "A";
	

	return letterGrade;
};

string getLetterGradeUsingSwitch(int grade)
{
	string letterGrade;
	
	switch(grade/10)
	{
		case 10 :
			letterGrade = "A";
			break;
		case 9 :
			letterGrade = "A";
			break;
		case 8 :
			letterGrade = "B";
			break;
		case 7 :
			letterGrade = "C";
			break;
		case 6 :
			letterGrade = "D";
			break;
		case 5 :
			letterGrade = "F";
			break;
		default:
			letterGrade = "F";
	return letterGrade;
	};
};