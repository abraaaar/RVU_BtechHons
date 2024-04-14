#include <stdio.h>
int main() {
  printf("Enter the no. of tables: ");
  int num1, scan1 = scanf("%d", &num1);
  printf("Enter the no. of multiples per table: ");
  int num2, scan2 = scanf("%d", &num2);

  for (int j = 1; j <= num2; j++) {
    for (int i = 1; i <= num1; i++){
      printf("%d x %d= %d,   ", i, j, i * j);
    }
    printf("\n");
  }
}