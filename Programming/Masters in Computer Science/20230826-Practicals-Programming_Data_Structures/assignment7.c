// Pattern #01

#include <stdio.h>
void main() 
{
    int n = 5, c = 1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%2d ", c);
            c++;
        }
        printf("\n");
    }
}


// Pattern #02

#include <stdio.h>
void main() 
{
    int n = 5;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
            printf("%2d ", j);
        printf("\n");
    }
}


// Pattern #03

#include <stdio.h>
void main() 
{
    int n = 5;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
            printf("%2d ", i);
        printf("\n");
    }
}


// Pattern #04

#include <stdio.h>
void main() 
{
    int n = 5;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
            printf(" ");
        for (int k = 1; k <= i; k++) 
            printf("* ");
        printf("\n");
    }
}


//Pattern #05

#include <stdio.h>
void main() 
{
    int n = 5;
    for (int i = n; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++)
            printf("*  ");
        printf("\n");
    }
}


// Pattern #06

#include <stdio.h>
void main() 
{
    int n = 5;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == j || i + j == 6)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}