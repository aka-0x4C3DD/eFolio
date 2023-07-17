#include<stdio.h>
main()
{
    int n, r;
    printf("\nC program to output the digits of a number. -By Suman Garai");
    printf("\n Enter a number: ");
    scanf("%d",&n);
    printf("\n The digits are: ");
    while (n!=0)
    {
        r = n % 10;
        printf("%d\t",r);
        n = n / 10;
    }
    
}