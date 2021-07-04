#include<stdio.h>
#include<string.h>
int main()
{
  char name[50];
  printf("\nEnter the string to convert in lower:");
  gets(name);
  strrev(name);
  printf("\n The string in lower case is:");
  puts(name);
  return 0;
 }
