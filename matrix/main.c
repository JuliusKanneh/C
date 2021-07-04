#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [3][3];
    int i, j, min,max;
    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter element of matrix at [%d][%d]: \n", i,j);
            scanf("%d", &num[i][j]);
        }
    }

    //displaying the matrix
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }

    //Finding the maximum and minimum values
    min = num[0][0];
    max = num[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(num[i][j]<min){
                min = num[i][j];
            }else if(num[i][j] > max){
                max = num[i][j];
            }
        }
    }

    //printing the min and max value;
    printf("\n========================\n");
    printf("Maximum number of the matrix is: %d\n", max);
    printf("Minimum number of the matrix is: %d\n", min);

    return 0;
}
