#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the number of names you want to sort: ");
    scanf("%d", &n);

    char name[n][15], temp[15];

    //Read names
    for(i=0; i<n; i++){
        printf("Enter name[%d]: ",i);
        scanf("%s", &name[i]);
    }

    //Sort names
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(name[i],name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    //Printing the unsorted and sorted list of names
    printf("\n======================================================\n");
    printf("unsorted List \t Sorted List\t");
    printf("\n======================================================\n");

    for(i=0; i<n; i++){
        printf("%s\n",name[i]);
    }

    return 0;
}
