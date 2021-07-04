#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct stud{
        int roll;
        char name[30];
        int marks1;
        int marks2;
        float per;
    };

    struct stud stud1 = {001, "John", 90,90,90.0};
    printf("\nAddress of roll number: %u", &stud1.roll);
    printf("\nAddress of name: %u", &stud1.name);
    printf("\nAddress of marks: %u", &stud1.name);
    printf("\nAddress of percent: %u\n", &stud1.per);

    //printing out structure values
    printf("\n===================================\n");
    printf("Roll No: %d\n",stud1.roll);
    printf("Name: %s\n",stud1.name);
    printf("Marks1: %d\n", stud1.marks1);
    printf("Marks2: %d\n", stud1.marks2);
    printf("Percent: %f\n", stud1.per);

    //Assigning values to elements or member of a structure each member initialization
    struct stud stud2;
    stud2.roll = 001;
    strcpy(stud2.name, "Julius");
    stud2.marks1 = 80;
    stud2.marks2 = 97;
    stud2.per = 89.0;

    //printing out structure values
    printf("Student #2 Information\n");
    printf("==========================\n");
    printf("Roll No: %d\n", stud2.roll);
    printf("Name: %s\n", stud2.name);
    printf("Marks1: %d\n", stud2.marks1);
    printf("Marks2: %d\n", stud2.marks2);
    printf("Percentage: %f\n", stud2.per);

    //Assigning values to elements or member of a structure from the user
    printf("===========================\n");


    return 0;
}
