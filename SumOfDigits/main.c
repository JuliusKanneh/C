#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, first_digit, second_digit, last_digit, sum;
    printf("Enter a 3-digits number to calculate its sum: ");
    scanf("%d", &num);
    first_digit = num / 100;
    second_digit = (num / 10) % 10;
    last_digit = num % 10;
    sum = first_digit + second_digit + last_digit;

    printf("The sum of the digits are: %d", sum);
    return 0;
}
