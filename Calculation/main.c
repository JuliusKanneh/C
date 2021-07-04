#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int mod, product;
    printf("Enter number one: \n");
    scanf("%d", &num1);
    printf("Enter number two: \n");
    scanf("%d", &num2);
    mod = num1 % num2;
    product = num1 * num2;
    printf("The reminder is: %d\n", mod);
    printf("The product is: %d\n", product);
    return 0;
}
