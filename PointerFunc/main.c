#include <stdio.h>
#include <stdlib.h>

int add(int *p1, int *p2);

int main()
{
    int num1, num2, sum;
    printf("\nEnter num1:");
    scanf("%d", &num1);
    printf("\nEnter num2:");
    scanf("%d", &num2);
    sum = add(&num1, &num2);
    printf("The sum is : %d", sum);
    return 0;
}

//add function defintion
int add(int *p1, int *p2){
    int sum;
    sum = *p1 + *p2;
    return sum;
}
