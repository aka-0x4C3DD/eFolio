#include <stdio.h>
#include <math.h>
void dec(int);
void bin(int);
main()
{
    int num, o;
    printf("\nC program to convert a number from decimal to binary or vice-versa. -By Suman Garai");
    printf("\n Enter a Number: ");
    scanf("%d", &num);1
    Label:printf(" Convert:- [1] Decimal to Binary | [2] Binary to Decimal : ");
    scanf("%d",&o);
    switch (o)
    {
        case 1: dec(num); break;
        case 2: bin(num); break;
        default : printf("Invalid Entry. Please Enter Value Correctly !"); goto Label; break;
    }
}
void dec(int num)
{
    int r, bin = 0, k = 1;
    do
    {
        r = num % 2;
        num = num / 2;
        bin = bin + r * k;
        k = k * 10;
    } while (num!=0);
    printf("\n Binary Number : %d\n", bin);
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