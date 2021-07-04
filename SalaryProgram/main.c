#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary, working_hours;
    const int k = 100000;
    printf("Enter the numbers of hours worked for: ");
    scanf("%f", &working_hours);
    if (working_hours > 40){
        salary = (k * 90) / 100;
        printf("%f", salary);
    }else{
        salary = (k * 75) / 100;
        printf("%f", salary);
    }

    return 0;
}
