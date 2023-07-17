#include<stdio.h>
main()
{
    void diff(int, int);
    int a, b;
    printf("\nTo find the difference b/w 2 numbers using functions with argument without return value. -By Suman Garai\n");
    printf(" Enter the numbers: ");
    scanf("%d %d", &a, &b);
    diff(a, b);
    printf("\nExit\n");
}
void diff(int a, int b)
{
    int d;
    d = a - b;
    printf(" %d - %d = %d", a, b, d);
}