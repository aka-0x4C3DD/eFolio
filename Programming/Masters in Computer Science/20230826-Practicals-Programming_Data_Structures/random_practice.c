// bubble sort //

#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int temp;
    int swapped;
    
    for (int i = 0; i < n - 1; i++) 
    {
        swapped = 0; // Flag to check if any swaps were made in this pass
        
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        
        // If no two elements were swapped in this pass, the array is already sorted
        if (swapped == 0)
            break;
    }
}

void main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);

}


// insertion sort //

#include <stdio.h>

void insertionSort(int arr[], int n) 
{
    int i, key, j;
    for (i = 1; i < n; i++) // Start from the second element
    {
        key = arr[i]; // Element to be inserted at the right position
        j = i - 1; // Index of the element to the left of key
        
        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) // Compare key with each element on the left of it until an element smaller than it is found
        {
            arr[j + 1] = arr[j]; // Move the greater element one position up
            j = j - 1; // Move to the left
        }
        arr[j + 1] = key; // Place key at the right position
    }
}

void main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}


// selection sort //

#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) // Move boundary of unsorted subarray
    {
        // Find the minimum element in the unsorted part of the array
        minIndex = i; // Index of the minimum element in the unsorted part
        for (j = i + 1; j < n; j++) // Compare the element with the rest of the array
        {
            if (arr[j] < arr[minIndex]) // If a smaller element is found
            {
                minIndex = j; // Update the index of the minimum element
            }
        }
        
        // Swap the minimum element with the first element in the unsorted part
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}


/* ---------------------------------------------------------------------------------------- */


// linear search //

#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

void main() 
{
    int arr[] = {2, 4, 7, 10, 13, 18, 21, 23, 25, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    
    int result = linearSearch(arr, n, key);
    
    if (result != -1) 
        printf("Element %d found at index %d\n", key, result);
    else 
        printf("Element %d not found in the array\n", key);
}


// binary search

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) 
            return mid; // Element found, return its index
        
        if (arr[mid] < key) 
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1; // Element not found
}

void main() 
{
    int arr[] = {2, 4, 7, 10, 13, 18, 21, 23, 25, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    
    int result = binarySearch(arr, 0, n - 1, key);
    
    if (result != -1) 
        printf("Element %d found at index %d\n", key, result);
    else 
        printf("Element %d not found in the array\n", key);
}


/* ---------------------------------------------------------------------------------------- */


// factorial using c user defined function and recursive call //

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
        return 1; // Base case: 0! and 1! are both 1
    else 
        return n * factorial(n - 1); // Recursive call
}

void main() 
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) 
        printf("Factorial is not defined for negative numbers.\n");
    else
    { 
        unsigned long long fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }
}

