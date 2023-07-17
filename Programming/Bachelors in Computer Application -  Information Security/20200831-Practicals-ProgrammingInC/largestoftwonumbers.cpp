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
    l = a; // To store the Largest Number
    if (b > l) l = b;
    if (c > l) l = c;
    if (d > l) l = d;
    s = a; // To store the Smallest Number
    if (b > s) s = b;
    if (c > s) s = c;
    if (d > s) s = d;
    n = ( a + b + c + d ) - ( l + s );
    /* 
       Now, we have the Sum of The 2nd Largest Number and Smallest Number
       We will now find out One Number out of the 2nd Largest Number and Smallest Number
    */ 
    if (a!=l && a!=s) a = max;
    else if (b!=l && b!=s) b = max;
    else c = max;
    min = n - max; // To get the 2nd Number
    if ( max > min ) // To find the Largest and Smallest
    {
        max = sl;
        min = ss;
    }
    else
    {
         max = ss;
         min = sl;
    }
    printf("\n The 2nd Largest Number: %f", sl);
    printf("\n The 2nd Smallest Numbers: %f \n", ss);
    return 0;
}