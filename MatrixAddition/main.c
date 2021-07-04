#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix_sum[3][3];
    int i, j;

    //reading matrix1 values from the user
    printf("Enter matrix one values: \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("Matrix1[%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\n");
    //reading matrix2 values from the user
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("Matrix2[%d][%d]: ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //printing matrix1
    printf("\nMatrix 1\n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    //printing matrix2
    printf("\nMatrix 2\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    //Addition of Matrix
    for(i = 0; i < 3; i++){
        for(j=0; j<3; j++){
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    //Display the result of operation
    printf("\nSum of two Matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", matrix_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
