#include <stdio.h>

int main() 
{
   int year;
   year = 2016;

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("Yes");
   else
      printf("No");

   return 0;
}
