#include<stdio.h> 
main() 
{ 
    int n,a[20],temp,j,i; 
    printf("C program to sort a list of numbers using Insertion sort. -By Suman Garai On 29-12-2020\n");
    printf("Enter the number of elements in the array: \n"); 
    scanf("%d",&n); 
    printf("Enter array elements:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);  
    for(i=1;i<n;i++)
    { 
        temp=a[i]; 
        j=i-1; 
        while((temp<a[j])&&(j>=0))
        { 
            a[j+1]=a[j]; 
            j=j-1; 
        } 
        a[j+1]=temp; 
    } 
    printf("The sorted array is\n"); 
    for(i=0;i<n;i++) 
        printf("%-4d",a[i]); 
}
