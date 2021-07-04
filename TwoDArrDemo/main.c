#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][4];
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("Enter value for arr[%d][%d]: \n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
