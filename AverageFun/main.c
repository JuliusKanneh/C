/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a =20.4, b=30.5, c=40.5;
    float average(int a, int b, int c);

    printf("Calculating the average: \n");
    float avg = findAverage(a,b,c);
    printf("The average of %f, %f, and %f is: %f",a,b,c, avg);
    return 0;
}

float findAverage(float a, float b, float c){
    return (a * b * c) / 3;

}*/
#include<stdio.h>
float average(float a,float b, float c);
int main()
{
    float n1,n2,n3;
    printf("Enter n1: ");
    scanf("%f",&n1);
    printf("Enter n2: ");
    scanf("%f", &n2);
    printf("Enter n3: ");
    scanf("%f", &n3);

    average(n1,n2,n3);
    return 0;

}
float average(float a,float b, float c)
{
    float average;
    average = (a+b+c)/3;
    printf("%f ", average);
    return average;

}
