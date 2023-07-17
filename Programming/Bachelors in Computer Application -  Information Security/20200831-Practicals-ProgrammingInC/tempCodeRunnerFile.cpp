#include <stdio.h>
main ()
{
    int i, j, rows, n = 1;
    printf("\nC Program to generate pattern. -By Suman Garai");
    printf("\n Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=rows; j++)
        {
            printf("%4d", n); n++;
        } n -= (rows - 1); printf("\n");
    } 
}