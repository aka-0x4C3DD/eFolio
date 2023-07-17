#include<stdio.h>  
#include <string.h>  
int main()
{ 
    char s[50],rev[50]; 
    int i,length=0,j=0; 
    printf("C program to check whether a given string is a palindrome or not (without library functions). -By Suman Garai\n"); 
    printf("Enter the String: ");  
    gets(s); 
    for(i=0;s[i]!='\0';i++) 
        length++; 
    length--; 
    for(i=0;i<(length/2);i++) 
    { 
        if(s[i]!=s[length]) 
        { 
            printf("String is not palindrome\n");
            return 0;  
        } 
        length--; 
    } 
    printf("The string is palindrome"); 
    return 0;  
}  
