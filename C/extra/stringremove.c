// REMOVING ALL THE OCCURENCES OF A USER INPUT CHARACTER FROM A USER INPUT SENTENCE

#include <stdio.h>
int main()
{
  char a[100];
  printf("Write a sentence: ");
  scanf("%[^\n]s",&a);
  
  printf("The inputed sentence is : %s ", a);
  
}