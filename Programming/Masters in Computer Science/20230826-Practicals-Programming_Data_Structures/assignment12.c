// Input 3 numbers and display their value through pointer

#include <stdio.h>

void main() 
{
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Values using pointers: %d, %d, %d\n", *ptr1, *ptr2, *ptr3);
}


// Write a program in C to Swap Two numbers using pointer

#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: %d, %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: %d, %d\n", num1, num2);
}


// Input values in an array and display the array elements using pointer

#include <stdio.h>

void main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    ptr = arr;

    printf("Array elements using pointer: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", *(ptr + i));
}


// Input values in an array and add the Array elements using pointer

#include <stdio.h>

void main() 
{
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for (int i = 0; i < n; i++) 
        sum += *(ptr + i);

    printf("Sum of array elements: %d\n", sum);
}


// Reverse a string using pointer

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    char *start = str;
    char *end = str + strlen(str) - 1;

    // Reverse the string using pointers
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
}


// Sort a numeric array using pointer

#include <stdio.h>

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements if they are in the wrong order
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortArray(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
}


// Add two numbers using a function and invoke the function using pointer

#include <stdio.h>

int addNumbers(int *a, int *b) 
{
    return *a + *b;
}

void main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = addNumbers(&num1, &num2);

    printf("Sum of the two numbers: %d\n", sum);
}
