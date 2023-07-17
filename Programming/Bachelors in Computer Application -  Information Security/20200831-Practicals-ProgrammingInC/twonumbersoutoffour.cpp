#include<stdio.h>
int main()
{
    int a, b, c, d; 
    float l, s, n; 
    float max, min, sl, ss;
    printf("\nTo Print the 2nd Largest and Smallest Number out of the Inputs - By Suman Garai");
    printf("\n Enter 1st Number: ");
    scanf("%d", &a);
    printf(" Enter 2nd Number: ");
    scanf("%d", &b);
    printf(" Enter 3rd Number: ");
    scanf("%d", &c);
    printf(" Enter 4th Number: ");
    scanf("%d", &d);
    l = a; 
    if (b > l) l = b;
    if (c > l) l = c;
    if (d > l) l = d;
    s = a; 
    if (b < s) s = b;
    if (c < s) s = c;
    if (d < s) s = d;
    n = ( a + b + c + d ) - ( l + s );
    if ((a!=l) && (a!=s)) max = a;
    else if ((b!=l) && (b!=s)) max = b;
    else max = d;
    min = n - max; 
    if ( max > min ) { sl = max; ss = min; }
    else { ss = max; sl = min; }
    printf("\n The 2nd Largest Number: %f", sl);
    printf("\n The 2nd Smallest Numbers: %f \n", ss);
    return 0;
}