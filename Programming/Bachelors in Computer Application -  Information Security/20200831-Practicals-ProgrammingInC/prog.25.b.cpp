#include <stdio.h>
main ()
{
    int i, j, rows;
    printf("\nC Program to generate pattern. -By Suman Garai");
    printf("\n Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%4d", i);
        } printf("\n");
    } 
}