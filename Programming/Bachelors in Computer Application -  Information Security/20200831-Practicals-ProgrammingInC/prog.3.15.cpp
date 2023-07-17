#include<stdio.h>
main()
{
    int n, i = 1, s = 0;
    printf("\nC program to find the sum of all numbers from 1 to N. -By Suman Garai");
    printf("\n Enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        s = s + i;
        ++i;
    }
    printf("\n The Sum is: %d", s);
}