#include <stdio.h>
void sinx(float, int);
void cosx(float, int);
main()
{
    int n, o;
    float x;
    printf("\nC Program to find the sum of Sin(x)/Cos(X) series. -By Suman Garai");
    printf("\n Enter the value for x : ");
    scanf("%f",&x); 
    printf(" Enter the value for n : ");
    scanf("%d",&n);
    Label:printf(" Choose:- [1] Sin(x) | [2] Cos(x) : ");
    scanf("%d",&o);
    switch (o)
    {
        case 1: sinx(x, n); break;
        case 2: cosx(x, n); break;
        default : printf("Invalid Entry. Please Enter Value Correctly !"); goto Label; break;
    }
}
void sinx(float x, int n)
{
    int i;
    float sum, t;
    x=x*3.14159/180;
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }   
    printf("The value of Sin(%f) is = %.4f\n", x, sum);
}
void cosx(float x, int n)
{
    int i;
    float sum, t;
    x=x*3.14159/180;
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
    printf("The value of Cos(%f) is : %.4f\n", x, sum);
}