#include<stdio.h>
main()
{
    int n, r, s = 0;
    printf("\nCprogram to print the reverse of a number. -By Suman Garai On 29-12-2020\n");
    printf("\n Enter a number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    printf("\n The reverse is: %d", s);
}
