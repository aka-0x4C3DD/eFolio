#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nC program to find the roots of a quadratic equation (else-if) - By Suman Garai");
    float a, b, c;
    float desc, root1, root2;
    printf("\nEnter the constants: "); 
    scanf("%f %f %f", &a,&b,&c); 
    desc = b * b - 4 * a * c; 
    if ( desc > 0) 
    {
       printf("\n Roots are Real"); 
 	   root1 = (-b + sqrt(desc))/(2.0 * a);
       root2 = (-b - sqrt(desc))/(2.0 * a);
       printf("\nFirst Root : %f", root1);  
       printf("\nSecond Root : %f\n", root2); 
  	} 
 	else if ( desc == 0) 
 	{ 
 	 	printf("\n Roots are Equal"); 
      	root1 = -b / (2.0 * a); 
      	printf("\nThe Root is : %f\n", root1); 
 	} 
 	else 
 	{ 
 	 	printf("\n Roots are Imaginary"); 
        root1 = -b / (2.0 * a);
        root2 = sqrt(abs(desc)) / (2.0 * a);
        printf("\nReal part  : %f", root1);
        printf("\nImaginary part : %f\n", root2); 
  	} 
    return 0;
} 
   
 	