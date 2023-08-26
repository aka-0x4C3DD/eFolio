
// Write a program to find the remainder after dividing 314 by 21

#include<stdio.h>
void main()
{
    int a = 314;
    int b = 21;
    printf("\n the remainder after dividing 314 by 21 is %d\n", a%b);
}


// Program to convert temperature from celsius to farenheit

#include<stdio.h>
void main()
{
    float c = 5.0;
    float k = 9/5;
    printf("\n temperature in farenheit is %.3f\n", k*c+32);
}

// Program to convert to different number systems

#include<stdio.h>
void main()
{
    char a = 012; //octal number (12 = 1x8 ^ 1 + 2x8 ^ 0 = 10)
    int x = 0b101; //binary number (101 = 1x2 ^ 2 + 0x2 ^ 1 + 1x2 ^ 0 = 5)
    int y = 0xE; //hexadecimal number (E = 14)
    printf("\n the number equivalent for (12)10 is = (%d)8, (101)2 = (%d)10, (E)16 = (%d)10\n", a, x, y);
}

// Find the output of the following code

#include<stdio.h>
void main()
{
    int num = - -2;
    printf("\n the value of num is %d\n", num);
}

// Find the output of the following code

#include<stdio.h>
void main()
{
    float a = 5.0;
    printf("\n the value of a is %f\n", (24/5)*a);
}

// C program to print Integer equivalent of character data types

#include<stdio.h>
void main()
{
    char a = 'A';
    char c;
    printf("\n the value of A in character is %c\n", a);
    a++;
    printf("\n the value of A after increment is %c\n", a);
    printf("\n the value of A in integer after increment is %d\n", a);
    // c is assigned ASCII values which corresponds to the character 'c'
    // a --> 97, b --> 98, c --> 99 | here c will be printed
    c = 99;
    printf("\n the value of c is %c\n", c);
    printf("\n the value of c in integer is %d\n", c);
}

// Program to know the size of data types in memory

#include<stdio.h>
void main()
{
    printf("\n the size of int is %d\n", sizeof(int));
    printf("\n the size of float is %d\n", sizeof(float));
    printf("\n the size of char is %d\n", sizeof(char));
    printf("\n the size of double is %d\n", sizeof(double));
    printf("\n the size of long is %d\n", sizeof(long));
    printf("\n the size of long double is %d\n", sizeof(long double));
    printf("\n the size of long long is %d\n", sizeof(long long));
}