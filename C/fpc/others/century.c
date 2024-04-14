#include <stdio.h>
#include <string.h>

int main(){
  
   int year;
   while(1){
    printf("Enter the year: ");
    int scan=scanf("%d",&year);
    if (year>=0){
      break;
    }else{
      printf("Invalid, Try again\n");
    }
  }
  int a=year%100, b=year-a, c=b/100;
  if(year%100==0){
    printf("The year %d lies in %d century :) ",year,c);
  }else{
  printf("The year %d lies in %d century :) ",year,c+1);
    }
}