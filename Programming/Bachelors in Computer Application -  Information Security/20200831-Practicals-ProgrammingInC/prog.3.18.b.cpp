#include <stdio.h>
#include <math.h>
main()
{ 
    int num,dec = 0,r,k,i = 0;
    printf("\nC program to convert a number from binary to decimal. -By Suman Garai");
    printf("\nEnter a Binary number: ");
    scanf("%d", &num);
    do
    {
        r = num % 10;
        num = num / 10;
        dec = dec + r * pow(2, i);
        i++;
    } while (num!=0);
    printf("\nDecimal Number : %d", dec);
}
    
