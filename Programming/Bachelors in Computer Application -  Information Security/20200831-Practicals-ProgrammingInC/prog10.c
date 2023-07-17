#include<stdio.h>
void main()
{
    int a, b, c, d, sl, ss, l, s, n, max, min;
    printf(" \n To Print the 2nd Largest and Smallest No. Out of the Given Inputs");
    printf("\n Enter 1st Number: ");
    scanf(" %d", &a);   
    printf(" Enter 2nd Number: ");
    scanf(" %d", &b);    
    printf(" Enter 3rd Number: ");
    scanf(" %d", &c);  
    printf(" Enter 4th Number: ");
    scanf(" %d", &d);  
    l = a;
    if (b > l)
    { 
        l = b;
    } 
    if (c > l) 
    {
        l = c; 
    }
    if (d > l) 
    { 
        l = d;
    }
    s = a;
    if (b < s) 
    {
        s = b; 
    }
    if (c < s) 
    { 
        s = c;
    }
    if (d < s)
    {
        s = d;
    }
    n = (a + b + c + d) - (l + s);
    /* Till now, I have found a sum of the 2nd largest and smallest number out of the Input.
    Now, what I am gonna do is, out of the four numbers, I will take a number which isnt the largest and the smallest.
    Then, I will deduct it from the sum of the 2nd largest & smallest number. 
    This gives me 2 numbers out of the four which arent the largest or the smallest one.
    Now I will compare them with each other and assign accordingly */
    if ( (a != l) && (a != s) ) 
    { 
        max = a; 
    }
    else if ( (b != l) && (b != s) ) 
    {
        max = b;
    } 
    else 
    {
        max = c;
    } 
    min = n - max;
    if (max > min)
    { 
        max = sl; 
        min = ss; 
    } 
    else 
    { 
        max = ss; 
        min = sl; 
    } 
    printf("\n The Second Largest Number: %d", sl);
    printf("\n The Second Smallest Number: %d \n \n", ss);
    
}