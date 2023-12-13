// write a program in C to perform matrix addition

#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c],b[r][c],s[r][c];
    printf("Enter the elements of the first matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
    printf("Enter the elements of the second matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }   
    }

    printf("The sum of the two matrices is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d\t",s[i][j]);
        }   
        printf("\n");
    }
}

// write a c program to perform matrix multiplication

#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int i,j,r,c,k;
    printf("Enter the number of rows and columns of the matrices (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c],b[r][c],m[r][c];
    printf("Enter the elements of the first matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
    printf("Enter the elements of the second matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }   
    }

    printf("The product of the two matrices is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
            for(k=0;k<c;k++) // to keep the row of the first matrix constant and change the column of the second matrix
            {
                m[i][j]+=a[i][k]*b[k][j]; // to multiply the elements of the row of the first matrix with the elements of the column of the second matrix
            }
            printf("%d\t",m[i][j]);
        }   
        printf("\n");
    }
}

// write a c program to find the transpose of a matrix

#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c],t[c][r];
    printf("Enter the elements of the matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }

    printf("The transpose of the matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
            printf("%d\t",t[j][i]);
        }   
        printf("\n");
    }
}

// write a c program to input the size of the matrix and generate the identity matrix

#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c];
    printf("The identity matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
            printf("%d\t",a[i][j]);
        }   
        printf("\n");
    }
}

// Input Student RegdNo, Name, Date-of-birth, subject names & subject marks in different arrays for multiple students. On searching the regd no it will show the details of corresponding student.

#include<stdio.h>
#include<stdlib.h>

struct student
{
    int regdno;
    char name[20];
    char dob[20];
    char subject[50];
    int marks;
};

void main()
{
    int i, n, regdno;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student t[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the registration number of student %d: ", i + 1);
        scanf("%d", &t[i].regdno);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", t[i].name);
        printf("Enter the date of birth of student %d: ", i + 1);
        scanf("%s", t[i].dob);
        printf("Enter the subject of student %d: ", i + 1);
        scanf("%s", t[i].subject);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &t[i].marks);
    }

    printf("Enter the registration number of the student whose details you want to see: ");
    scanf("%d", &regdno);
    for (i = 0; i < n; i++)
    {
        if (regdno == t[i].regdno)
        {
            printf("The details of the student are: \n");
            printf("Registration number: %d\n", t[i].regdno);
            printf("Name: %s\n", t[i].name);
            printf("Date of birth: %s\n", t[i].dob);
            printf("Subject: %s\n", t[i].subject);
            printf("Marks: %d\n", t[i].marks);
        }
    }
}

// Create a matrix of size mxn. Input data in all rows and columns except last row and last column. Calculate the sum of row data and store in last column cells and sum of column data and store in last row cells.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c];
    printf("Enter the elements of the matrix:\n ");
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }

    for(i=0;i<r-1;i++)
    {
        a[i][c-1]=0;
        for(j=0;j<c-1;j++)
        {
            a[i][c-1]+=a[i][j];
        }   
    }

    for(j=0;j<c-1;j++)
    {
        a[r-1][j]=0;
        for(i=0;i<r-1;i++)
        {
            a[r-1][j]+=a[i][j];
        }   
    }

    printf("The matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }   
        printf("\n");
    }
}

/* 
Write a program in C to input a matrix and perform following operations

(a) display the perimeter elements.

(b) Display Non-Perimeter elements.

(c) Find the sum of Perimeter elements.

(d) Display zeroes in place of non perimeter elements.
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix (with commas): ");
    scanf("%d, %d",&r,&c);

    int a[r][c];
    printf("Enter the elements of the matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }

    printf("The perimeter elements are: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                printf("%d\t",a[i][j]);
            }
        }   
    }

    printf("\nThe non-perimeter elements are: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=0 && i!=r-1 && j!=0 && j!=c-1)
            {
                printf("%d\t",a[i][j]);
            }
        }   
    }

    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                sum+=a[i][j];
            }
        }   
    }
    printf("\nThe sum of the perimeter elements is: %d\n",sum);

    printf("The matrix with zeroes in place of non-perimeter elements is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=0 && i!=r-1 && j!=0 && j!=c-1)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
        }   
        printf("\n");
    }
}