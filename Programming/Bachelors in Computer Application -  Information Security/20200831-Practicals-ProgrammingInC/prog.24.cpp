#include<stdio.h>
main()
{
    int n,i,flag,j;
    printf("\nC Program to print Prime Numbers from 1 to N. -By Suman Garai"); 
    printf("\n Enter the (N)umber: ");
    scanf("%d",&n);
    printf("The Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        flag=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==2)
            printf(" %d " ,i);
    }
}