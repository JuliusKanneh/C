#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myString[30], chTemp;
    int i, j, len;
    printf("Enter string here in all lower or upper case: \n");
    gets(myString);
    len = strlen(myString);

    //Sort in ascending order (works only for lowercase or uppercase) How can I sort with both upper & lower cases in a word
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(myString[i] > myString[j]){
                chTemp = myString[i];
                myString[i] = myString[j];
                myString[j] = chTemp;
            }
        }
    }

    puts(myString);

    return 0;
}
