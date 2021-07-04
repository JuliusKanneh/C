#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[9] = "Abanabeza";
    char l1 = 'a', l2 = 'b';
    int i, a_counter=0, b_counter=0;

    for(i=0;i<9;i++){
        if(strcmp(name[i],l2 == 0)){
            a_counter = a_counter + 1;
        }
        if(strcmp(name[i],l2 == 0)){
            b_counter = b_counter + 1;
        }
    }
    printf("The number of a is: %d",a_counter);
    printf("The number of b is: %d", b_counter);
    return 0;
}
