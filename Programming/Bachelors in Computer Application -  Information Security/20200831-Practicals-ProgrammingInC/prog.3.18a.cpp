#include <stdio.h>
main()
{ 
    int num,dec,bin,r,k;
    printf("\nCprogram to convert a number from decimal to binary. -By Suman Garai");
    printf("\nEnter a Decimal number: ");
    scanf("%d", &num);
    bin = 0;
    k = 1;
    do
    {
        r = num % 2;
        num = num / 2;
        bin = bin + r * k;
        k = k * 10;
    } while (num!=0);
    printf("\nBinary Number : %d", bin);
}