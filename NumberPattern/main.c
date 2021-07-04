#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    printf("Enter pattern stopping point: ");
    scanf("%d", &k);
    for(i = 1; i<=k; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
