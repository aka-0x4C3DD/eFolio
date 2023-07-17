#include <stdio.h> 
#include <math.h> 
int main() 
{ 
 float p, r, t, CI; 
 float compoundInterest(float,float,float); 
 printf("\nC program using functions to calculate compound interest.  -By Suman Garai\n");
 printf("Enter principle (amount): "); 
 scanf("%f", &p); 
 printf("Enter time: "); 
 scanf("%f", &t); 
 printf("Enter rate: "); 
 scanf("%f", &r); 
 CI=compoundInterest(p,r,t); 
 printf("Compound Interest = %f",(CI)); 
 return 0; 
} 
float compoundInterest(float p,float r,float t) 
{ 
float ci; 
 ci=p*pow((1 + r / 100),t)-p; 
 return ci; 
} 
