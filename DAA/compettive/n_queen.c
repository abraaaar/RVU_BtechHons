#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void rec(int size, char cb[][size])
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cb[i][j] = 'Q';
      rec(size-1, cb);
      
    }
  }

  
}

void print(int size, char cb[][size])
{
  for (int i = 0; i < size; i++)
  {
    for (int  j = 0; j < size; j++)
    {
      printf("%c ",cb[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter the side of square: ");
  scanf("%d",&n);
  char chessboard[n][n];
  memset(chessboard, '.', sizeof(chessboard));
  rec(n, chessboard);
  return 0;

}
