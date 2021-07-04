#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, column,i,j, min, max;

    printf("Enter row size:\n");
    scanf("%d", &row);
    printf("Enter column size:\n");
    scanf("%d", &column);
    int matrix[row][column];

    //reading values
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("Enter matrix[%d][%d]:\n",row,column);
            scanf("%d", &matrix[i][j]);
        }
    }

    min = matrix[0][0];
    max = matrix[0][0];

    //finding minimum and maximum of a matrix
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            if(min > matrix[i][j]){
                min = matrix[i][j];
            }

            if(max < matrix[i][j]){
                max = matrix[i][j];
            }
        }
    }

    //printing the max and min values
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d", max);

    return 0;
}
