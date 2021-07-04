#include <stdio.h>
#include <stdlib.h>

void student_info(char f_name[20], char l_name[20], int age);
int main()
{
    char f_name[20], l_name[20];
    int age;

    printf("Enter first name: \n");
    scanf("%s",f_name);
    printf("Enter last name: \n");
    scanf("%s",l_name);
    printf("Enter age: \n");
    scanf("%d", &age);

    student_info(f_name, l_name, age);

    return 0;
}

void student_info(char f_name[20], char l_name[20], int age){

    //displaying result
    printf("%s %s %d",f_name, l_name, age);
}
