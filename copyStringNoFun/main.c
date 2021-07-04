#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[20], string2[20];
    printf("Enter string1: \n");
    gets(string1);
    int i;
    for(i = 0; string1[i]!='\0'; i++){
        string2[i] = string1[i];
    }
    string2[i] = '\0';
    //Display the two strings
    printf("Original String: %s\n", string2);
    printf("Copied String: %s\n", string2);

    return 0;
}
