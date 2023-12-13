// print numbers from 20 to 50 using for loop

#include <stdio.h>
void main()
{
    int i;
    for (i = 20; i <= 50; i++)
    {
        printf("%d\n", i);
    }
}

// print numbers from 50 to 1 using for loop

#include <stdio.h>
void main()
{
    int i;
    for (i = 50; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

// WAP C program to find sum of digits of a number using for loop

#include <stdio.h>
void main()
{
    int n, s = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0; n /= 10)
    {
        r = n % 10;
        s += r;
    }
    printf("Sum of digits of is %d\n", s);
}

// WAP C program to find reverse of a number using for loop

#include <stdio.h>
void main()
{
    int n, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0; n /= 10)
    {
        r = n % 10;
        rev = rev * 10 + r;
    }
    printf("Reverse of is %d\n", rev);
}

// WAP C program to count number of digits using for loop

#include <stdio.h>

void main() 
{
    int n, c = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop to count digits
    for (; n != 0; n /= 10) {
        c++;
    }

    printf("Number of digits: %d\n", c);
}

// take number as input and check whether its prime or not using for loop

#include <stdio.h>
void main() 
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i) 
    {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}