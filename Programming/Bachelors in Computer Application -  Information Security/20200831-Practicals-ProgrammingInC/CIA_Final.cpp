#include <stdio.h>
#include <math.h>
void bin(int);
main()
{
    int num, o;
    printf("\nC program to convert a number from Binary to Decimal. -By Suman Garai On 29-12-2020\n");
    printf("\n Enter a Number: ");
    scanf("%d", &num);
    bin(num);
}
void bin(int num)
{
    int dec = 0, r, k, i = 0;
    do
    {
        r = num % 10;
        num = num / 10;
        dec = dec + r * pow(2, i);
        i++;
    } while (num!=0);
    printf("\n Decimal Number : %d\n", dec);
}
