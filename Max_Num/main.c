#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    printf("Enter third number: \n");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3){
        printf("The largest number is: %d",num1);
    } else if(num2 > num1 && num2 > num3){
        printf("The largest number is: %d", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("The largest number is: %d", num3);
    }else{
        printf("Check out some logic here boy!");
    }

    return 0;
}
