#include<stdio.h>
main()
{
    int arr[5][5], i, j, m, n, sum = 0;
    printf("To print the sum of rows & columns. -By Suman Garai\n");
    printf("Enter the size of array: m (row size), n (column size)");
    printf("\n m: ");
    scanf( "%d", &m);
    printf(" n: ");
    scanf( "%d", &n);
    printf("\nEnter elements into array:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf( "%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n The array: \n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("+ %d\t", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("= %d\n",sum);
        sum = 0;
    }
    sum = 0;
    for (j = 0; j < n; ++j) 
    {
        for (i = 0; i < m; ++i)
        {
            sum = sum + arr[i][j];
        } 
        printf("= %d\t",sum);
        sum = 0;
    }
}