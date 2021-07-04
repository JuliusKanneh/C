#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Structure definition
    struct UNILAK_STAFFS {

        char emp_no[10], fname[25], lname[25], sex[7], department[25];
        double salary_per_month;
    };

    //Structure variables Declaration
    struct UNILAK_STAFFS staff1, staff2, staff3, staff4, staff5;

    //Reading values from the users
    //Reading Staff1 information
    printf("\nEnter Staff1 information: ");
    printf("\n--------------------------------\n");
    printf("Enter staff1 Employee No: ");
    scanf("%s", staff1.emp_no);
    printf("\nEnter staff1 First Name: ");
    scanf("%s", staff1.fname);
    printf("\nEnter staff1 Last Name: ");
    scanf("%s", staff1.lname);
    printf("\nEnter staff1 Sex: ");
    scanf("%s", staff1.sex);
    printf("\nEnter staff1 Department: ");
    scanf("%s", staff1.department);
    printf("\nEnter staff1 Salary: ");
    scanf("%lf", &staff1.salary_per_month);

    //Reading staff2 information
    printf("\nEnter Staff2 information: \n");
    printf("\n--------------------------------\n");
    printf("Enter staff2 Employee No: ");
    scanf("%s", staff2.emp_no);
    printf("\nEnter staff2 First Name: ");
    scanf("%s", staff2.fname);
    printf("\nEnter staff2 Last Name: ");
    scanf("%s", staff2.lname);
    printf("\nEnter staff2 Sex: ");
    scanf("%s", staff2.sex);
    printf("\nEnter staff2 Department: ");
    scanf("%s", staff2.department);
    printf("\nEnter staff2 Salary: ");
    scanf("%lf", &staff2.salary_per_month);

    //Reading staff3 information
    printf("\nEnter Staff3 information: \n");
    printf("\n--------------------------------\n");
    printf("Enter staff3 Employee No: ");
    scanf("%s", staff3.emp_no);
    printf("\nEnter staff3 First Name: ");
    scanf("%s", staff3.fname);
    printf("\nEnter staff3 Last Name: ");
    scanf("%s", staff3.lname);
    printf("\nEnter staff3 Sex: ");
    scanf("%s", staff3.sex);
    printf("\nEnter staff3 Department: ");
    scanf("%s", staff3.department);
    printf("\nEnter staff3 Salary: ");
    scanf("%lf", &staff3.salary_per_month);

    //Reading staff4 information
    printf("\nEnter Staff4 information:\n");
    printf("\n--------------------------------\n");
    printf("Enter staff4 Employee No: ");
    scanf("%s", staff4.emp_no);
    printf("\nEnter staff4 First Name: ");
    scanf("%s", staff4.fname);
    printf("\nEnter staff4 Last Name: ");
    scanf("%s", staff4.lname);
    printf("\nEnter staff4 Sex: ");
    scanf("%s", staff4.sex);
    printf("\nEnter staff4 Department: ");
    scanf("%s", staff4.department);
    printf("\nEnter staff4 Salary: ");
    scanf("%lf", &staff4.salary_per_month);

    //Reading staff5 information
    printf("\nEnter Staff5 information: \n");
    printf("\n--------------------------------\n");
    printf("Enter staff5 Employee No: ");
    scanf("%s", staff5.emp_no);
    printf("\nEnter staff5 First Name: ");
    scanf("%s", staff5.fname);
    printf("\nEnter staff5 Last Name: ");
    scanf("%s", staff5.lname);
    printf("\nEnter staff5 Sex: ");
    scanf("%s", staff5.sex);
    printf("\nEnter staff5 Department: ");
    scanf("%s", staff5.department);
    printf("\nEnter staff5 Salary: ");
    scanf("%lf", &staff5.salary_per_month);

    //printing the staffs information
    printf("\nStaffs Information \n");
    printf("\n=======================================\n");

    //Printing staff1 information
    printf("\nStaff1 Information \n");
    printf("\n--------------------------------\n");
    printf("Staff1 Employee No: ");
    puts(staff1.emp_no);
    printf("Staff1 First Name: ");
    puts(staff1.fname);
    printf("Staff1 Last Name: ");
    puts(staff1.lname);
    printf("Staff1 Sex: ");
    puts(staff1.sex);
    printf("Staff1 Department: ");
    puts(staff1.department);
    printf("Staff1 Salary: ");
    printf("%lf", staff1.salary_per_month);

    //Printing staff2 information
    printf("\nStaff2 Information \n");
    printf("\n--------------------------------\n");
    printf("Staff2 Employee No: ");
    puts(staff2.emp_no);
    printf("Staff2 First Name: ");
    puts(staff2.fname);
    printf("Staff2 Last Name: ");
    puts(staff2.lname);
    printf("Staff2 Sex: ");
    puts(staff2.sex);
    printf("Staff2 Department: ");
    puts(staff2.department);
    printf("Staff2 Salary: ");
    printf("%lf", staff2.salary_per_month);

    //Printing staff3 information
    printf("\nStaff3 Information \n");
    printf("\n--------------------------------\n");
    printf("Staff3 Employee No: ");
    puts(staff3.emp_no);
    printf("Staff3 First Name: ");
    puts(staff3.fname);
    printf("Staff3 Last Name: ");
    puts(staff3.lname);
    printf("Staff3 Sex: ");
    puts(staff3.sex);
    printf("Staff3 Department: ");
    puts(staff3.department);
    printf("Staff3 Salary: ");
    printf("%lf", staff1.salary_per_month);

    //Printing staff4 information
    printf("\nStaff4 Information \n");
    printf("\n--------------------------------\n");
    printf("Staff4 Employee No: ");
    puts(staff4.emp_no);
    printf("Staff4 First Name: ");
    puts(staff4.fname);
    printf("Staff4 Last Name: ");
    puts(staff4.lname);
    printf("Staff4 Sex: ");
    puts(staff4.sex);
    printf("Staff4 Department: ");
    puts(staff4.department);
    printf("Staff4 Salary: ");
    printf("%lf", staff4.salary_per_month);

    //Printing staff5 information
    printf("\nStaff5 Information \n");
    printf("\n--------------------------------\n");
    printf("Staff5 Employee No: ");
    puts(staff5.emp_no);
    printf("Staff5 First Name: ");
    puts(staff5.fname);
    printf("Staff5 Last Name: ");
    puts(staff5.lname);
    printf("Staff5 Sex: ");
    puts(staff5.sex);
    printf("Staff5 Department: ");
    puts(staff5.department);
    printf("Staff5 Salary: ");
    printf("%lf", staff5.salary_per_month);

    return 0;
}

