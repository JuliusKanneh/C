#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Using the gets() function
    char name[20];
    printf("Using the gets() function: \n");
    printf("Enter your full name: \n");
    gets(name);
    printf("Hello %s\n\n", name);

    //Using the fgets() function
    //printf("\n");
    char name1[20];
    printf("Using the gets() function: \n");
    printf("Enter your full name: \n");
    fgets(name1, sizeof(name1), stdin);
    printf("Hello %s\n", name1);

    //Using the scanset conversion code
    char name2[20];
    printf("Enter your full name in lowercase: \n");
    scanf("%[a-z]", name2);
    printf("Your full name in lowercase is : %s\n", name2);

    //Using the scanset with circumflex (^)
    char paragraph[150];
    printf("Type your paragraph of not more than 150 words. hit enter to climax. \n");
    scanf("%[^\n]", paragraph);
    printf("Your paragraph is: \n");
    printf("%s", paragraph);
    return 0;
}
