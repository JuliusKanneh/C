#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[30], num1[30];

    int i, j, n, temp;
    printf("Enter the total number of elements you want tot sort: \n");
    scanf("%d", &n);

    //Reading the integer values of array0 from the user
    for(i=0; i<n; i++){
        printf("\nEnter value at num[%d]: ",i);
        scanf("%d", &num[i]);
    }

    printf("\n======================================\n");
    //Reading the integer values of array1 from the user
    for(i=0; i<n; i++){
        printf("\nEnter value at num1[%d]: ", i);
        scanf("%d", &num1[i]);
    }

    //Sorting in descending order
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    //Sorting in Ascending order
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(num1[i] > num1[j]){
                temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
            }
        }
    }

    //Print the sorted list in descending order
    printf("\nThe sorted list of numbers in descending order: \n");
    for(i=0; i<n; i++){
        printf("%d\n",num[i]);
    }

    //Print the sorted list in ascending order
    printf("The sorted list of numbers in ascending order: \n");
    for(i=0; i<n; i++){
        printf("%d\n", num1[i]);
    }

    return 0;
}
