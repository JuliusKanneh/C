#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    printf("Enter stopping point: \n");
    scanf("%d", &k);
    for(i=1; i<=k; i++){
        for(j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
