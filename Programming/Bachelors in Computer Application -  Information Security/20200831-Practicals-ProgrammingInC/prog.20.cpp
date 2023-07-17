#include <stdio.h> 
main() 
{ 
    int n, i, j, flag = 0; 
    printf("\nC Program to check wheteher a given number is prime or not. -By Suman Garai"); 
    Label:printf("\n Enter a positive integer: "); 
    scanf("%d", &n); 
    if (n == 1) 
    printf("1 is neither a prime nor a composite number.\n"); 
    else if ( n > 1 )
    {
        for(i = 1; i <= n; i++) 
        { 
            if (n%i == 0) flag++ ; 
        }
        if (flag == 2) printf("%d is a prime number.\n", n); 
        else
        {
            printf("%d is not a prime number.\n", n); 
        }
    }
    else { printf("Invalid Number. Please Enter Value Correctly !"); goto Label; }
}