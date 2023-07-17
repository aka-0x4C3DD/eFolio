#include <stdio.h>
main() 
{ 
    int i, n, fact = 1; 
    printf("\nC Program to Find out the Factorial of a number. -By Suman Garai. ");
    printf("\n Enter a number: "); 
    scanf("%d", &n); 
    for (i = 1; i <= n; i++) fact = fact * i; 
    printf(" Factorial of %d = %d\n", n, fact); 
}
