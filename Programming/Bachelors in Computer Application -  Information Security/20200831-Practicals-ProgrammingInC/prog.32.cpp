#include <stdio.h>
int work (int);
int main() 
{
    int num, result = 0;
    printf("\nC program to find whether a number is Armstrong or not. -By Suman Garai\n");
    printf(" Enter a three-digit integer: ");
    scanf("%d", &num);
    result = work (num);
    if (result == num)
        printf(" %d is an Armstrong number.", num);
    else
        printf(" %d is not an Armstrong number.", num);
}
int work (int num)
{
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0)
    {
       remainder = originalNum % 10;
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }
    return result;
}
   