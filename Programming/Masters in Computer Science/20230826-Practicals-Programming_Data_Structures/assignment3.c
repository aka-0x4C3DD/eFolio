// WAP in C to check whether a no is positive or not

#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("The number is positive");
    else
        printf("The number is negative");
}

// WAP in C to find out the greater among two numbers

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("The greater number is %d", a);
    else
        printf("The greater number is %d", b);
}

// WAP in C to take a number as input and find out if its even or not

#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("The number is even");
    else
        printf("The number is odd");
}

// WAP in C to find out the sum of 10 numbers by using if-goto statement

#include<stdio.h>
void main()
{
    int i = 1, sum = 0;
    loop:
    if (i <= 10)
    {
        sum += i;
        i++;
        goto loop;
    }
    printf("The sum of the numbers is %d", sum);
}

// WAP in C to find out the multiplication table of any integer no by using goto-if statement. exit controlled loop

#include<stdio.h>
void main ()
{
    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    loop:
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
        if (i <= n)
            goto loop;
    }
}