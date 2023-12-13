// Input 10 elements in an array and display the elements in both forward and backward direction.

#include <stdio.h>

void main() 
{
    int arr[10];
    
    // Input 10 elements in an array
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) 
        scanf("%d", &arr[i]);
    
    // Display elements in forward direction
    printf("Elements in forward direction: ");
    for (int i = 0; i < 10; i++) 
        printf("%d ", arr[i]);
    
    // Display elements in backward direction
    printf("\nElements in backward direction: ");
    for (int i = 9; i >= 0; i--) 
        printf("%d ", arr[i]);
}

// Input 10 numeric values in an array and find sum, average of number.

#include <stdio.h>

void main() 
{
    int arr[10];
    
    // Input 10 numeric values in an array
    printf("Enter 10 numeric values:\n");
    for (int i = 0; i < 10; i++) 
        scanf("%d", &arr[i]);
    
    // Find the sum and average of numbers
    int sum = 0;
    for (int i = 0; i < 10; i++) 
        sum += arr[i];

    float average = (float)sum / 10;
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}

// Input n number of numeric values   in an array and find maximum and minimum value in it.

#include <stdio.h>

void main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input n numeric values in an array
    printf("Enter %d numeric values:\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
            max = arr[i];
        if (arr[i] < min) 
            min = arr[i];
    }
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}
