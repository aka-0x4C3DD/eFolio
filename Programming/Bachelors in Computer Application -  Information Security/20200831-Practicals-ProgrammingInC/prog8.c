#include <stdio.h>
void main() {
   int y;
   printf("\n Program to Check whether a year is Leap year or Not. -By Suman Garai "); 
   printf("\n Enter a year: ");
   scanf("%d", &y );
   if (y % 400 == 0 || y % 100 == 0 && y % 4 == 0) 
   {
      printf(" %d is a leap year. \n", y);
   }
   else if (y % 100 == 0) 
   {
      printf(" %d is not a leap year. \n", y);
   }
   else 
   {
      printf(" %d is not a leap year. \n", y);
   }
}