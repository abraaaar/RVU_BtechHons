#include <stdio.h>
#include <stdlib.h>

int main()
{
  int guess, year;
  char yesno;
  printf("Choose a number between 1 and 9: ");
  scanf("%d", &guess);
  printf("Write your year of birth: ");
  scanf("%d",&year);
  printf("Is your bithday coming this year(y/n): ");
  scanf(" %c",&yesno);

  guess = ((guess*2)+5) * 50;
  if (yesno == 'y' || yesno == 'Y')
  {
    guess+=1773;
  }
  else 
  {
    guess+=1774;
  }

  guess-=year;
  printf("\nWoW:  %d",guess);
}