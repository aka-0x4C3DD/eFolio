#include<stdio.h> 
#include<string.h> 
#include<iostream>
main( ) 
{ 
    FILE *fp; 
    char s[50],c; 
    int i; 
    fp=fopen("text.txt","w"); 
    if(fp==NULL) 
    { 
        puts("file opening error"); return 0; 
    } 
    printf("C program to write a sentence in a file and convert all lower case alphabets to uppercase and  vice versa. -By Suman Garai\n");
    printf("Enter the string\n"); 
    while(strlen(gets(s))>0) 
    { 
        fputs(s,fp); 
        fputs("\n",fp); 
    } 
    fclose(fp); 
    fp=fopen("text.txt","r"); 
    if(fp==NULL)  
    { 
        puts("file opening error"); return 0; 
    }
    printf("The Output is\n"); 
    while(fgets(s,49,fp)!= NULL) 
    { 
        i=0; 
        while(s[i]!='\0') 
        { 
            c=s[i]; 
            if(isupper(c)) 
                printf("%c",tolower(c));  
            else if(islower(c))  
                printf("%c",toupper(c)); 
            else 
                printf("%c",c); 
            i++;    
        }
    }  
    fclose(fp); 
}
