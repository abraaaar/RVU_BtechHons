#include <stdio.h>
#include <stdlib.h>


void towerOfHanoi(int num, char start, char end)
{
  if (num==1)
  { 
    printf("\nMoved Disk - 1\tfrom %c to %c",start,end);
    return;
  }
  else
  {
    // int temp1 = start - 'A' + 1;
    // int temp2 = end - 'A' + 1;
    // int diff = temp1 - temp2;
    // int temp = (6 + diff) + 'A' - 1;
    // char other = (char)temp;
    char other = (char)('F' + (start - end));
    towerOfHanoi(num-1, start, other);
    printf("\nMoved Disk - %d\tfrom %c to %c",num,start,end);
    towerOfHanoi(num-1, other, end);
  }
}

int main()
{
  int disks;
  printf("Enter the number of disks: ");
  scanf("%d", &disks);
  towerOfHanoi(disks, 'A', 'C');

}
