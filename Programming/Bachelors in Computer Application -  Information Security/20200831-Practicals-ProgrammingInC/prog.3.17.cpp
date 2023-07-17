#include<stdio.h>
main()
{
    int i = 0;
    float pi, p, y, r;
    printf("\nCprogram to print the the Compund Interest. -By Suman Garai");
    printf("\nEnter The PRINCIPAL Ammount: ");
    scanf("%f",&p);
    printf("Enter The NUMBER Of YEAR(S): ");
    scanf("%f",&y);
    printf("Enter The RATE Of INTEREST(%): ");
    scanf("%f",&r);
    do
    {
        pi = p * r / 100;
        p = p + pi;
        i++;
    } while (i<y);
    printf("The COMPOUND INTEREST: %f\n",p);
}
