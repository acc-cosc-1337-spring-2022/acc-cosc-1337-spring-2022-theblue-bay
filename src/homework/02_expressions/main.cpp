#include <iostream>
#include "expressions.h"

using namespace std;

int main()
{
	double mealAmount;
	double tipRate;
	double tipAmount;
	double taxAmount;
	double total;

	cout << "How much was your food? " << endl;
	cin >> mealAmount;

	taxAmount = getSalesTaxAmount(mealAmount);

	cout << "How much would you like to tip? " << endl;
	cin >> tipRate;

	tipAmount = getTipAmount(mealAmount, tipRate);

	total = tipAmount + taxAmount + mealAmount;

	cout << "Meal Amount:   " << mealAmount << endl << "Sales Tax:   " << taxAmount << endl << "Tip Amount:   " << tipAmount << endl << "Total:   " << total << endl;
	
	return 0;
}
