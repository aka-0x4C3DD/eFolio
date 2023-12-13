
// Personal Data Structure

#include <stdio.h>

struct PersonalData 
{
    int citizen_ID;
    char name[50];
    char address[100];
    long long mobile_no;
    float annual_income;
};

void main() 
{
    struct PersonalData person;

    printf("Enter Citizen ID: ");
    scanf("%d", &person.citizen_ID);
    // Similar input statements for other fields

    // Displaying entered data
    printf("\nPersonal Data:\n");
    printf("Citizen ID: %d\nName: %s\nAddress: %s\nMobile No: %lld\nAnnual Income: %.2f\n",
           person.citizen_ID, person.name, person.address, person.mobile_no, person.annual_income);

}


// Academic Data Structure

#include <stdio.h>

struct AcademicData 
{
    int roll_no;
    char course[50];
    int semester;
    char university[100];
    float cgpa;
};

int main() {
    struct AcademicData students[3];  // Assuming data for 3 students

    // Input data for multiple students
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Semester: ");
        scanf("%d", &students[i].semester);
        printf("University: ");
        scanf("%s", students[i].university);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Display details of all students
    printf("\nAcademic Data:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\nCourse: %s\nSemester: %d\nUniversity: %s\nCGPA: %.2f\n",
               students[i].roll_no, students[i].course, students[i].semester, students[i].university, students[i].cgpa);
    }

    return 0;
}


// Age Calculation

#include <stdio.h>

struct Date 
{
    int day, month, year;
};

void main() 
{
    struct Date birth_date, current_date;

    // Input birth_date
    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &birth_date.day, &birth_date.month, &birth_date.year);

    // Input current_date
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &current_date.day, &current_date.month, &current_date.year);

    // Calculate age
    int years, months, days;

    // Calculate years
    years = current_date.year - birth_date.year;

    // Calculate months
    if (current_date.month < birth_date.month ||
        (current_date.month == birth_date.month && current_date.day < birth_date.day)) 
    {
        years--;
        months = 12 - (birth_date.month - current_date.month);
    } 
    else 
        months = current_date.month - birth_date.month;

    // Calculate days
    if (current_date.day < birth_date.day) 
    {
        months--;
        days = 30 - (birth_date.day - current_date.day);
    } 
    else 
        days = current_date.day - birth_date.day;

    // Display age
    printf("\nAge: %d years, %d months, %d days\n", years, months, days);
}


// Object Length Calculation

#include <stdio.h>

struct Object {
    char name[50];
    int feet;
    float inch;
};

void main() 
{
    struct Object objects[5];
    float totalFeet = 0, totalInch = 0;

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter details for object %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", objects[i].name);
        printf("Length in feet: ");
        scanf("%d", &objects[i].feet);
        printf("Length in inches: ");
        scanf("%f", &objects[i].inch);

        // Calculate total length
        totalFeet += objects[i].feet;
        totalInch += objects[i].inch;
    }

    // Display details of all objects
    for (int i = 0; i < 5; i++) 
    {
        printf("\nObject %d:\n", i + 1);
        printf("Name: %s\nLength: %d feet %.2f inches\n", objects[i].name, objects[i].feet, objects[i].inch);
    }

    // Display total length
    printf("\nTotal Length: %.0f feet %.2f inches\n", totalFeet, totalInch);
}


// Complex Number Operations

#include <stdio.h>

struct Complex 
{
    float real;
    float imag;
};

void main() 
{
    struct Complex num1, num2, sum, difference;

    // Input num1
    printf("Enter real and imaginary parts of complex number 1: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input num2
    printf("Enter real and imaginary parts of complex number 2: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Addition
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Subtraction
    difference.real = num1.real - num2.real;
    difference.imag = num1.imag - num2.imag;

    // Display results
    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", difference.real, difference.imag);
}


// Employee Salary Calculation and Search

#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    char designation[50];
    float basic_salary;
    long long mobile_no;
    char email_id[50];
    char address[100];
    char gender;
    float ta;
    float da;
    float hra;
    float pf;
    float gross_salary;
    float net_salary;
};

void main() 
{
    struct Employee employees[10];  // Assuming maximum of 10 employees
    int n;  // Number of employees

    // Input data for multiple employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employee_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        // Similar input statements for other fields

        // Calculate allowances and deductions
        employees[i].ta = 0.3 * employees[i].basic_salary;
        employees[i].da = 0.45 * employees[i].basic_salary;
        employees[i].hra = 0.15 * employees[i].basic_salary;
        employees[i].pf = 0.18 * employees[i].basic_salary;

        // Calculate gross salary and net salary
        employees[i].gross_salary = employees[i].basic_salary + employees[i].ta + employees[i].da + employees[i].hra;
        employees[i].net_salary = employees[i].gross_salary - employees[i].pf;
    }

    // Display details of all employees
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\nName: %s\nDesignation: %s\nBasic Salary: %.2f\nMobile No: %lld\n",
               employees[i].employee_id, employees[i].name, employees[i].designation, employees[i].basic_salary, employees[i].mobile_no);
        // Display other details as needed
        printf("Gross Salary: %.2f\nNet Salary: %.2f\n", employees[i].gross_salary, employees[i].net_salary);
    }

    // Search for an employee by Employee_id
    int search_id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search_id);

    // Display details of the employee with the given ID
    int found = 0;
    for (int i = 0; i < n; i++) 
    {
        if (employees[i].employee_id == search_id) 
        {
            printf("\nEmployee found!\n");
            printf("Employee ID: %d\nName: %s\nDesignation: %s\nBasic Salary: %.2f\nMobile No: %lld\n",
                   employees[i].employee_id, employees[i].name, employees[i].designation, employees[i].basic_salary, employees[i].mobile_no);
            // Display other details as needed
            printf("Gross Salary: %.2f\nNet Salary: %.2f\n", employees[i].gross_salary, employees[i].net_salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee not found with the given ID.\n");
}
