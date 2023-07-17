#include <stdio.h>
void comp(int, int);
void work(int, int);
main()
{
    int n1, n2, a;
    printf("\nC Program to find the GCD & LCM of two numbers. -By Suman Garai");
    printf("\n Enter two Numbers: ");
    scanf("%d, %d", &n1, &n2);
    printf(" GCD & LCM of %d and %d ", n1, n2);
    comp(n1, n2);
}
void comp(int n1, int n2)
{
    int num, den;
    if (n1 > n2) { num = n1; den = n2; }
    else { num = n2; den = n1; }
    work(num, den);  
}
void work(int num, int den)
{
    int rem, gcd, lcm;
    rem = num % den;
    while (rem!=0)
    {
        num = den;
        den = rem;
        rem = num % den;
    }
    gcd = den; lcm = num * den / gcd;
    printf("\b are %d and %d respectively.\n", gcd, lcm);
}