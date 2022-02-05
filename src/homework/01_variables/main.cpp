//write include statements
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
using namespace std;


int main()
{
    int num;

	cout << "Enter a number, please. " << endl;
	
	cin >> num;

	int result;

	result = multiply_numbers(num);
		
	int num1 = 4;

	cout << result << endl;

	result = multiply_numbers(num1);

	cout << result << endl;

	return 0;
}
