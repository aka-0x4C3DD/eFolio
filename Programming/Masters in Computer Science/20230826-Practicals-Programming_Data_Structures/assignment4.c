// write a program to print the largest of three numbers

#include <stdio.h>
void main()
{
    int a, b, c, l;
    printf("\nEnter the value of a, b, c (integer): ");
    scanf("%d, %d, %d", &a, &b, &c);
    
    if (a > b && a > c)
    {
        l = a;
    }
    else if (b > a && b > c)
    {
        l = b;
    }
    else
    {
        l = c;  
    }
    printf("\n\n%d is the largest number\n", l);
}

// write a program to print the smallest of three numbers

#include <stdio.h>
void main()
{
    int a, b, c, s;
    printf("\nEnter the value of a, b, c (integer): ");
    scanf("%d, %d, %d", &a, &b, &c);
    
    if (a < b && a < c)
    {
        s = a;
    }
    else if (b < a && b < c)
    {
        s = b;
    }
    else
    {
        s = c;  
    }
    printf("\n\n%d is the smallest number\n", s);
}

// write a program to input Roll No., Registration No., Name, Age, Branch, marks of 5 subjects, and display Percentage of marks, total marks and grade

#include <stdio.h>
void main() 
{
    int rn, rN;
    char n[50], b[50];
    float m[5], tM, p;
    char g;

    printf("Enter Roll No: ");
    scanf("%d", &rn);

    printf("Enter Registration No: ");
    scanf("%d", &rN);

    printf("Enter Name: ");
    scanf("%[^\n]s", &n);

    printf("Enter Branch: ");
    scanf("%s", &b);

    for (int i = 1; i < 6; i++) {
        printf("Enter marks for Subject %d: ", i);
        scanf("%f", &m[i]);
        tM += m[i];
    }

    p = (tM / 500) * 100;

    switch ((int)p / 10) {
        case 10:
        case 9:
            g = 'O';
            break;
        case 8:
            g = 'E';
            break;
        case 7:
            g = 'A';
            break;
        case 6:
            g = 'B';
            break;
        case 5:
            g = 'C';
            break;
        case 4:
            g = 'D';
            break;
        default:
            g = 'F';
            break;
    }

    printf("\n------ Mark Sheet ------\n");
    printf(" Roll No: %d\n Registration No: %d\n Name: %s\n Branch: %s\n Total Marks: %.2f\n Percentage: %.2f%%\n Grade: %c\n", rn, rN, n, b, tM, p, g);
}

// write a program to enter twi time intervals in (HH:MM:SS) format and display the difference between them

#include <stdio.h>
void main()
{
    int h1, m1, s1, h2, m2, s2, dH, dM, dS;
    printf("Enter the first time (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Enter the second time (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    dS = s2 - s1;
    dM = m2 - m1;
    dH = h2 - h1;
    if (dS < 0) {
        dS += 60;
        dM--;
    }
    if (dM < 0) {
        dM += 60;
        dH--;
    }
    if (dH < 0) {
        dH += 24;
    }
    printf("Time difference: %02d:%02d:%02d\n", dH, dM, dS);
}

// C program to generate consumer electric bill 

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int cN;
    char cNa[50], mN[20];
    float pR, cR, uC, tC;

    // Input consumer details
    printf("Enter Consumer Number: ");
    scanf("%d", &cN);
    printf("Enter Consumer Name: ");
    scanf(" %[^\n]s", &cNa);
    printf("Enter Meter Number: ");
    scanf("%s", &mN);
    printf("Enter Previous Meter Reading (in units): ");
    scanf("%f", &pR);
    printf("Enter Current Meter Reading (in units): ");
    scanf("%f", &cR);

    // Calculate units consumed
    uC = cR - pR;

    // Calculate total charges based on units consumed using a switch statement
    switch ((int)uC) {
        case 0 ... 100:
            tC = uC * 2.00;
            break;
        case 101 ... 200:
            tC = 100 * 2.00 + (uC - 100) * 3.00;
            break;
        case 201 ... 300:
            tC = 100 * 2.00 + 100 * 3.00 + (uC - 200) * 4.50;
            break;
        case 301 ... 500:
            tC = 100 * 2.00 + 100 * 3.00 + 100 * 4.50 + (uC - 300) * 5.50;
            break;
        default:
            tC = 100 * 2.00 + 100 * 3.00 + 100 * 4.50 + 200 * 5.50 + (uC - 500) * 7.00;
            break;
    }

    // Display the electric bill
    printf("\n-----Electric Bill------\n");
    printf("Consumer Number: %d\n", cN);
    printf("Consumer Name: %s\n", cNa);
    printf("Meter Number: %s\n", mN);
    printf("Previous Reading: %.2f units\n", pR);
    printf("Current Reading: %.2f units\n", cR);
    printf("Units Consumed: %.2f units\n", uC);
    tC = abs (tC);
    printf("Total Charges: %.2f Rupees\n", tC);

}

// write a c program to check whether the entered year is leap year or not

#include <stdio.h>
void main() 
{
    int y;

    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &y);

    // Check if it's a leap year
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
    {
        printf("%d is a leap year.\n", y);
    } 
    else 
    {
        printf("%d is not a leap year.\n", y);
    }
}



