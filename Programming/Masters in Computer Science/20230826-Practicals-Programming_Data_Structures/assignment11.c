// menu-driven customer account management system

#include <stdio.h>
float balance = 0.0;

void deposit(float amount) 
{
    balance += amount;
}

void withdraw(float amount) 
{
    if (amount <= balance) 
        balance -= amount;
    else 
        printf("Insufficient balance\n");
}

void displayBalance() 
{
    printf("Account Balance: %.2f\n", balance);
}

void main() 
{
    int choice;
    char name[100];
    int accountNumber;
    float initialDeposit;

    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter initial deposit amount: ");
    scanf("%f", &initialDeposit);
    deposit(initialDeposit);

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the deposit amount: ");
                scanf("%f", &initialDeposit);
                deposit(initialDeposit);
                break;
            case 2:
                printf("Enter the withdrawal amount: ");
                scanf("%f", &initialDeposit);
                withdraw(initialDeposit);
                break;
            case 3:
                displayBalance();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}


// calculate an employee's salary

#include <stdio.h>
float calculateGrossSalary (float basicSalary)
{
    float TA = 0.35 * basicSalary;
    float DA= 0.75 * basicSalary;
    float HRA = 0.30 * basicSalary;
    return basicSalary + TA + DA + HRA;
}

float calculateNetSalary (float basicSalary)
{
    float PF = 0.18 * basicSalary;
    return basicSalary - PF;
}


void main()
{
    int empID;
    char name[100];
    float basicSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empID);
    printf("Enter Name: ");
    scanf("%s", &name);
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    
    float grossSalary = calculateGrossSalary(basicSalary); 
    float netsalary = calculateNetSalary(basicSalary);
    
    printf("\nEmployee ID: %d\n", empID);
    printf("\nEmployee Name: %s\n", name);
    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("\nNet Salary: %.2f\n", netsalary);
}


// Menu-driven program to calculate the area and perimeter of shapes

#include <stdio.h>
#include <math.h>

float calculateAreaTriangle(float base, float height) 
{
    return 0.5 * base * height;
}

float calculatePerimeterTriangle(float base, float height) 
{
    return (base + height + sqrt(base * base + height * height));
}

float calculateAreaSquare(float side) 
{
    return side * side;
}

float calculatePerimeterSquare(float side) 
{
    return 4 * side;
}

float calculateAreaRectangle(float length, float width) 
{
    return length * width;
}

float calculatePerimeterRectangle(float length, float width)
{
    return 2 * (length + width);
}

void main() 
{
    int choice;
    float base, height, side, length, width, a, b, c;

    do {
        printf("\n1. Triangle\n2. Square\n3. Rectangle\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                printf("Area: %.2f\n", calculateAreaTriangle(base, height));
                printf("Perimeter: %.2f\n", calculatePerimeterTriangle(base, height));
                break;
            case 2:
                printf("Enter the side of the square: ");
                scanf("%f", &side);
                printf("Area: %.2f\n", calculateAreaSquare(side));
                printf("Perimeter: %.2f\n", calculatePerimeterSquare(side));
                break;
            case 3:
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                printf("Area: %.2f\n", calculateAreaRectangle(length, width));
                printf("Perimeter: %.2f\n", calculatePerimeterRectangle(length, width));
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
                break;
        } 
    } while (choice != 4);
}


// Recursive function to find the factorial of a number

#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
}


// Recursive function to find the sum of natural numbers up to a given number

#include <stdio.h>

int sumOfNaturalNumbers(int n) 
{
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

void main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) 
        printf("Please enter a positive integer.\n");
    else 
    {
        int sum = sumOfNaturalNumbers(num);
        printf("Sum of natural numbers up to %d is %d\n", num, sum);
    }
}


// Recursive function to find the sum of natural numbers within a given range

#include <stdio.h>

int sumOfNaturalNumbersInRange(int start, int end) 
{
    if (start > end)
        return 0;
    return start + sumOfNaturalNumbersInRange(start + 1, end);
}

void main() 
{
    int start, end;
    printf("Enter the starting and ending values: ");
    scanf("%d %d", &start, &end);
    if (start < 0 || end < 0) 
        printf("Please enter positive integers.\n"); 
    else 
    {
        int sum = sumOfNaturalNumbersInRange(start, end);
        printf("Sum of natural numbers in the range %d to %d is %d\n", start, end, sum);
    }
}


// Recursive function to generate Fibonacci series up to a given number of terms

#include <stdio.h>

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void generateFibonacciSeries(int n) 
{
    for (int i = 0; i < n; i++) 
        printf("%d ", fibonacci(i));
    printf("\n");
}

void main() 
{
    int num;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);
    if (num < 0) 
        printf("Please enter a non-negative integer.\n");
    else 
    {
        printf("Fibonacci series up to %d terms: ", num);
        generateFibonacciSeries(num);
    }
}
