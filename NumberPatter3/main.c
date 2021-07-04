#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    int salary[10];
    printf("Enter the value of k:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k++); //Post increment
        }
        printf("\n");
    }

    }
