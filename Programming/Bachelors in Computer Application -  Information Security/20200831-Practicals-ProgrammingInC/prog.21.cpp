#include <stdio.h>
main() 
{
    int i, n, t1 = 0, t2 = 1, nxtTrm;
    printf("\nC Program to print Fibonacci Series. -By Suman Garai.");
    printf("\n Enter the number of terms: ");
    scanf("%d", &n);
    printf(" Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
    {
        printf("%d\t", t1);
        nxtTrm = t1 + t2;
        t1 = t2;
        t2 = nxtTrm;
    } 
}