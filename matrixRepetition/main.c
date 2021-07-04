#include<stdio.h>
int main(){

    int arr[4][4]= {{1,1,2,3},{2,3,2,4},{4,2,3,1},{2,4,4,2} };
    int i,j, count =0;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

// for the repetition
    for(i=0; i<4; i++){
        if(arr[i]!=-1){
            for(j=0; j<4; j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]!=-1;
                }
            }
        }
    }

    printf(" The number of repetition of numbers in the metrix is:%d\n", count);

    return 0;

}
