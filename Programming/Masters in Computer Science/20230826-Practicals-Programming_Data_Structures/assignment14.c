// Create a text file and write a message in it

#include <stdio.h>

void main() 
{
    FILE *filePointer;
    char message[100];

    filePointer = fopen("message.txt", "w");

    if (filePointer == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter a message to write in the file: ");
    fgets(message, sizeof(message), stdin);

    fprintf(filePointer, "%s", message);

    fclose(filePointer);

    printf("Message written to the file successfully.\n");
}


// Read a text file

#include <stdio.h>

void main() 
{
    FILE *filePointer;
    char ch;

    filePointer = fopen("message.txt", "r");

    if (filePointer == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = fgetc(filePointer)) != EOF) 
    {
        putchar(ch);
    }

    fclose(filePointer);
}


// Write multiple lines in a file and read it

#include <stdio.h>

void main() 
{
    FILE *filePointer;
    char message[100];

    filePointer = fopen("multiline.txt", "w");

    if (filePointer == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter multiple lines to write in the file (press Ctrl+D to end input):\n");

    while (fgets(message, sizeof(message), stdin) != NULL) 
        fprintf(filePointer, "%s", message);

    fclose(filePointer);

    filePointer = fopen("multiline.txt", "r");

    if (filePointer == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while ((fgets(message, sizeof(message), filePointer)) != NULL) 
        printf("%s", message);

    fclose(filePointer);
}


// Store multiple records like Roll no, name, mark in a file and read it using fprintf() and fscanf()

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float mark;
};

void main() 
{
    FILE *filePointer;
    struct Student student;

    // Write records to file
    filePointer = fopen("student_records.txt", "w");

    if (filePointer == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter student details (Roll No, Name, Mark) - Enter -1 to end input:\n");

    while (1) 
    {
        printf("Roll No: ");
        scanf("%d", &student.rollNo);

        if (student.rollNo == -1) 
        {
            break;
        }

        printf("Name: ");
        scanf("%s", student.name);

        printf("Mark: ");
        scanf("%f", &student.mark);

        fprintf(filePointer, "%d %s %.2f\n", student.rollNo, student.name, student.mark);
    }

    fclose(filePointer);

    // Read records from file
    filePointer = fopen("student_records.txt", "r");

    if (filePointer == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(filePointer, "%d %s %f", &student.rollNo, student.name, &student.mark) != EOF) 
        printf("Roll No: %d, Name: %s, Mark: %.2f\n", student.rollNo, student.name, student.mark);

    fclose(filePointer);
}


// Store multiple records using a binary file and read it

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float mark;
};

void main() 
{
    FILE *filePointer;
    struct Student student;

    // Write records to binary file
    filePointer = fopen("binary_student_records.dat", "wb");

    if (filePointer == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter student details (Roll No, Name, Mark) - Enter -1 to end input:\n");

    while (1) 
    {
        printf("Roll No: ");
        scanf("%d", &student.rollNo);

        if (student.rollNo == -1) 
            break;

        printf("Name: ");
        scanf("%s", student.name);

        printf("Mark: ");
        scanf("%f", &student.mark);

        fwrite(&student, sizeof(struct Student), 1, filePointer);
    }

    fclose(filePointer);

    // Read records from binary file
    filePointer = fopen("binary_student_records.dat", "rb");

    if (filePointer == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fread(&student, sizeof(struct Student), 1, filePointer) == 1)
        printf("Roll No: %d, Name: %s, Mark: %.2f\n", student.rollNo, student.name, student.mark);

    fclose(filePointer);
}
