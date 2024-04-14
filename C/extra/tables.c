#include <stdio.h>
int main(){
  printf("Enter the number of tables: ");
  int num1, a=scanf("%d",&num1);
  printf("Enter the no. of multiples: ");
  int num2, b=scanf("%d",&num2);
  /*
  for(int i=1, m=(i+1); i<=num1; (i=i+m){
    for(int j=1, n=(j+1); j<=num2; (j=j+n){
        int mul=i*j, mul2=m*n;
        printf("MULTIPLICATION TABLE OF %d             MULTIPLICATION TABLE OF %d",i,i+1);
       printf("          %d x %d= %d                             %d x %d= %d",i,j,mul,m,n,mul2);  
    }
  }*/
   int i, j;
   for (i=1; i<=num1; i++){
     printf("\n \nMultiplication Table of %d\n",i);
       for (j=1; j<=num2; j++){
	 int mul=i*j;
	 printf("\n%d X %d = %d", i,j,mul);
}
  }
    }
