#include <stdio.h>
#include <stdlib.h>

void hanoiwow(int num, char start, char end, char temp)
{
  if (num == 1)
  {
    printf("\n    1 moved from - %c to %c", start, end);
    return;
  }
  else
  {
    hanoiwow(num - 1, start, temp, end);
    printf("\n    %d moved from - %c to %c", num, start, end);
    hanoiwow(num - 1, temp, end, start);
  }
}

int main()
{
  int disks;
  printf("Enter the number of disks: ");
  scanf("%d", &disks);

  printf("\n\n***Moving disks from A to C ***\n");
  hanoiwow(disks, 'A', 'C', 'B');
  return 0;
}
