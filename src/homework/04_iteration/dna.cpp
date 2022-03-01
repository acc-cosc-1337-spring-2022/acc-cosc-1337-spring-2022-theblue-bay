#include "dna.h"

int factorial(int num)
{
   int fact = 1, i = 1;

      
   while (i <= num)
   {
       fact = fact * i;
       i++;
   }

   return num;
};

int gcd(int num1, int num2)
{
   while (num1 != num2)
   {
      if (num1 > num2)
         num1 -= num2;
      else
         num2 -= num1;  
   }

   return num1;
};

