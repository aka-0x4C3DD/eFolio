#include <stdio.h>
main ()
{
    int i, j, rows;
    printf("\nC Program to generate pattern. -By Suman Garai");
    printf("\n Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>=1; i--)
    {
        for (j=i; j>=1; j--)
        {
            printf("%4d", j);
        } printf("\n");
    } 
}