#include <stdio.h>
main() 
{
    int base, exp;
    long long result = 1;
    printf("\nC Program to caluculate x^y using for loop. -By Suman Garai");
    printf("\n Enter a base number: ");
    scanf("%d", &base);
    printf(" Enter an exponent: ");
    scanf("%d", &exp);
    for(exp != 0; exp--;) result *= base;
    printf(" Answer = %lld\n", result);
}