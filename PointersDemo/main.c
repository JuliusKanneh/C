#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10, num2 = 20, *pointer1, *pointer2, sum;
    pointer1 = &num1;
    pointer2 = &num2;

    sum = *pointer1 + *pointer2;

    printf("\nThe value of pointer1 is: %d", *pointer1);
    printf("\The value of pointer2 is: %d", *pointer2);
    printf("\nThe value of n1 is: %d", num1);
    printf("\nThe value of n2 is: %d", num2);
    printf("\nThe value of n1 is: %d", *(&num1));
    printf("\nTHe value of n2 is: %d", *(&num2));
    printf("\nThe address of pointer1 is: %u", &num1);
    printf("\nThe address of pointer2 is: %u", &num2);
    printf("\nThe address of pointer1 is: %u", pointer1);
    printf("\nThe address of pointer2 is: %u", pointer2);
    printf("\nThe sum is: %d", sum);
    printf("\nThe address of sum is: %u", &sum);
    return 0;
}
