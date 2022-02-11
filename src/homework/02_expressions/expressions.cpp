#include "expressions.h"

double getSalesTaxAmount(double mealAmount)
{
	double taxRate = .0675;
	return mealAmount * taxRate;
}

double getTipAmount(double mealAmount, double tipRate)
{
	return mealAmount * tipRate;
}







