// WAP C program to input an integer number & find out the factorial of that number using while loop

#include <stdio.h>
void main()
{
    int n, f = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        f *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, f);
}

// WAP C program to print the sum of numbers from 1 to 20 using while loop

#include <stdio.h>
void main()
{
    int i = 1, s = 0;
    while (i <= 20)
    {
        s += i;
        i++;
    }
    printf("Sum of numbers from 1 to 20 is %d\n", s);
}

// WAP C Program to display the sum of all odd & even numbers between 20 & 50 using while loop

#include <stdio.h>
void main()
{
    int n = 20, eS = 0, oS = 0;
    while (n <= 50)
    {
        if (n % 2 == 0)
            eS += n;
        else
            oS += n;
        n++;
    }
    printf("Sum of even numbers b/w 20 to 50 is %d,\nand that of odd numbers is %d", eS, oS);
}

// WAP C Program to check if its perfect number or not using while loop

#include <stdio.h>
void main()
{
    int n, i = 1, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
            s += i;
        i++;
    }
    if (s == n)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
}

// WAP C Program to check if its armstrong number or not using while loop

#include <stdio.h>
#include <math.h>
void main()
{
    int N, oN, R, c, r;
    printf("Enter a number: ");
    scanf("%d", &N);
    // to check how may numbers are there in N
    oN = N;
    while (oN != 0)
    {
        oN /= 10;
        c++;
    }
    // to consider each digit of N, and raise it to the power of c
    oN = N;
    while (oN != 0)
    {
        R = oN % 10;
        r += pow(R, c);
        oN /= 10;
    }
    
    if (r == N)
        printf("%d is an armstrong number\n", N);
    else
        printf("%d is not an armstrong number\n", N);
}

// WAP C Program to check if its palindrome number or not using while loop

#include <stdio.h>
void main()
{
    int N, oN, R, r = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    oN = N;
    while (oN != 0)
    {
        R = oN % 10;
        r = r * 10 + R;
        oN /= 10;
    }
    if (r == N)
        printf("%d is a palindrome number\n", N);
    else
        printf("%d is not a palindrome number\n", N);
}

// WAP C program to input an integer and find its sum upto single digit using while loop

#include <stdio.h>
void main()
{
    int n, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 10)
    {
        s = 0;
        while (n > 0)
        {
            s += n % 10;
            n /= 10;
        }
        n = s;
    }

    printf("Sum of digits of is %d\n", s);
}