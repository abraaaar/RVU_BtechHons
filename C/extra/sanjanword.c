#include <stdio.h>
#include <string.h>

/*
int lengthh(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        ++count;
    }
    return count;
}

*/
int main()
{
  
  char n[50];
  printf("Enter any word: ");
  scanf("%[^\n]s",&n);

  //int len=lengthh(n);
  
  int len1=strlen(n);
  sus(n,len1);

  

}