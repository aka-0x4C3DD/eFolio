// Define the value and print the output
// How to inout the value with scanf

#include <stdio.h>
void main()
{
    int a;
    float b = 3.4;
    char s = 'k';
    char name[20] = "kiit";
    printf("a = %d, b = %f, s = %c, name = %s\n", a, b, s, name);
    printf("\n\nEnter the value of a (integer):");
    scanf("%d", &a);
    printf("\n\nEnter the value of b (float):");
    scanf("%f", &b);
    printf("\n\nEnter the value of s (character):");
    fflush(stdin);
    scanf("%c", &s);
    printf("\n\nEnter the value of name (string):");
    scanf("%s", name);
    printf("\n\nThe value of a  = %d, \nb = %f, \ns = %c, \nname = %s\n", a, b, s, name);
}

//Input your name, age, roll_no, branch, percentage of marks and display

#include <stdio.h>
void main()
{
    char n[20], b[8];
    int a, rn;
    float p = 0;
    printf("\nEnter your name (20 alphabets): ");
    scanf("%s", &n);
    printf("\nEnter your age (integer): ");
    scanf("%d", &a);
    printf("\nEnter your roll no (integer): ");
    scanf("%d", &rn);
    printf("\nEnter your branch (8 alphabets): ");
    scanf("%s", &b);
    printf("\nEnter your percentage of marks (percentage): ");
    scanf("%f", &p);
    printf("\n\nName = %s, \nAge = %d, \nRoll no = %d, \nBranch = %s, \nPercentage of marks = %f\n", n, a, rn, b, p);
}


// Input two numbers and display their sum, difference, product, quotient and remainder

#include <stdio.h>
void main()
{
    int a, b;
    printf("\nEnter the value of a (integer): ");
    scanf("%d", &a);
    printf("\nEnter the value of b (integer): ");
    scanf("%d", &b);
    printf("\n\nSum = %d, \nDifference = %d, \nProduct = %d, \nQuotient = %d, \nRemainder = %d\n", a + b, a - b, a * b, a / b, a % b);
}

// Input the radius of a circle and display its perimeter and area

#include <stdio.h>
void main()
{
    float r;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &r);
    printf("\n\nPerimeter = %f, \nArea = %f\n", 2 * 3.14 * r, 3.14 * r * r);
}

// Calculate the simple interest, total ammount and display

#include <stdio.h>
void main()
{
    float p, r, t;
    printf("\nEnter the principal amount (in rupees): ");
    scanf("%f", &p);
    printf("\nEnter the rate of interest (without symbol): ");
    scanf("%f", &r);
    printf("\nEnter the time period (in years): ");
    scanf("%f", &t);
    printf("\n\nSimple interest = %f, \nTotal amount = %f\n", p * r * t / 100, p + p * r * t / 100);
}

// To display a Marksheet which includes name, roll no, branch, semester number, marks in 5 subjects and total marks with percentge of marks

#include <stdio.h>
void main ()
{
    char n[20], b[8];
    int r, s, m1, m2, m3, m4, m5, t;
    float p;
    printf("\nEnter your name (20 alphabets): ");
    scanf("%s", &n);
    printf("\nEnter your roll no: ");
    scanf("%d", &r);
    printf("\nEnter your branch (8 alphabets): ");
    scanf("%s", &b);
    printf("\nEnter your semester number: ");
    scanf("%d", &s);
    printf("\nEnter your marks in 5 subjects (out of 100, use spaces in b/w to denote different subject): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    t = m1 + m2 + m3 + m4 + m5;
    p = t / 5;
    printf("\n\nName = %s, \nRoll no = %d, \nBranch = %s, \nSemester number = %d, \nMarks in 5 subjects = %d %d %d %d %d, \nTotal marks = %d, \nPercentage of marks = %f\n", n, r, b, s, m1, m2, m3, m4, m5, t, p);
}

// Marksheet Question, different approach

#include <stdio.h>

void main() 
{
    char name[50], branch[50];
    int roll_no, semester;
    float subject_marks[5];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your roll number: ");
    scanf("%d", &roll_no);

    printf("Enter your branch: ");
    scanf("%s", branch);

    printf("Enter your semester: ");
    scanf("%d", &semester);

    float total_marks = 0;
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &subject_marks[i]);
        total_marks += subject_marks[i];
    }

    float percentage = (total_marks / (--i*100)*100) * 100;

    printf("\n\nName: %s\nRoll Number: %d\nBranch: %s\nSemester: %d\n", name, roll_no, branch, semester);
    printf("Total Marks Secured: %.2f\n", total_marks);
    printf("Percentage of Marks: %.2f%%\n", percentage);
}  
