// find it's factorial using user defined function

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}


// User-defined functions to add, subtract, and multiply two numbers

#include <stdio.h>

int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    return 0;
}


// Check whether a number is perfect or not

#include <stdio.h>

int isPerfect(int n) 
{
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sum += i;
        }
    }
    return (sum == n);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfect(num)) 
    {
        printf("%d is a perfect number.\n", num);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}


// Check whether a number is prime or not

#include <stdio.h>

int isPrime(int n) 
{
    if (n <= 1) 
    {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}


// Reverse a number

#include <stdio.h>

int reverseNumber(int n) 
{
    int reversed = 0;
    while (n > 0) 
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);
    return 0;
}


// Generate Fibonacci series up to n terms

#include <stdio.h>

void generateFibonacci(int n) 
{
    int a = 0, b = 1, nextTerm;
    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) 
        {
            printf("%d, ", a);
            continue;
        }
        if (i == 2) 
        {
            printf("%d, ", b);
            continue;
        }
        nextTerm = a + b;
        printf("%d, ", nextTerm);
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    generateFibonacci(terms);
    return 0;
}


// Find the largest number in an array

#include <stdio.h>

int findLargest(int arr[], int size) 
{
    int max = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);
    printf("The largest number in the array is: %d\n", largest);
    return 0;
}


