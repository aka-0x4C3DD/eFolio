#include<stdio.h>
main()
{
    void diff();
    printf("\nTo find the difference b/w 2 numbers using functions without argument or return value. -By Suman Garai\n");
    diff();
    printf("\nExit\n");
}
void diff()
{
    int a, b, d;
    printf(" Enter the numbers: ");
    scanf("%d %d", &a, &b); 
    d = a - b;
    printf(" %d - %d = %d", a, b, d);
}
