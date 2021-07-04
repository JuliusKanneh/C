#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, arr[2][3][3];
    //Inserting elements of the array
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                printf("Enter element at arr[%d][%d][%d]: ",i,j,k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    //printing the elements of the array
    printf("Elements of the array: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                printf("%d ", arr[i][j][k]);
                if(k==2){
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
