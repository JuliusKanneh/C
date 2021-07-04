#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tname[10][8], name[10][8], temp[8];
    int i, j, n;
    printf("Enter value of n: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=i; j<n-1; j++){
            if(strcmp(name[j], tname[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j],name[j]);
            }
        }
    }

    printf("\n----------------------\n");
    printf("Input Sorted names \n");
    printf("---------------------\n");

    for(i=0; i<n; i++){
        printf("%s\t\t%s\n",tname[i], name[i]);
    }
    printf("---------------------------\n");
    return 0;
}
