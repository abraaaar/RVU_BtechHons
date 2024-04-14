#include <stdio.h>
int main(){
    int month, date;
    int year,b;
    while(1){
  printf("Enter the year:" );
  int scan1=scanf("%d",&year);
  if (year%400==0) {
    b=1;
    break;
  }
  else if (year%100==0) {
    b=0;
    break;
  }
  else if (year%4==0) {
    b=1;
    break;
  }else if (year>0){
    break;
  }
  else {
    printf("Invalid Input, Try Again\n");
  }
        }
   while (1){
       printf("Month: ");
      int scan2= scanf("%d",&month);
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
     
     while (1)                           {
         
         printf("Date: ");
       int scan3=  scanf("%d",&date);
         if (date>0 && date<=31)    {
             break;
         }  else{
             printf("Invalid Date, OMGGG SO STUPIDD ILL KMS TRYY AGAINNN BUITCHH\n");
         }
                                            }
       break;
    }else if (month==4 || month==6 || month==9 || month==11){
       
      while (1)                           {
         
         printf("Date: ");
        int scan4= scanf("%d",&date);
         if (date>0 && date<=30)    {
             break;
         }  else{
             printf("Invalid Date, OMGGG SO STUPIDD ILL KMS TRYY AGAINNN BUITCHH\n");
         }
                                            }
    break;
  }else if (month==2){
      while (b==0){
          
          printf("Date: ");
        int scan5=  scanf("%d",&date);
         if (date>0 && date<=28)    {
             break;
         }  else{
             printf("Invalid Date, Try Again\n");
         }
      }
      while (b==1){
          printf("Date: ");
      int scan6=   scanf("%d",&date);
         if (date>0 && date<=29)    {
             break;
         }  else{
             printf("Invalid Date, Try Again\n");
         }
      }
      break;
      
  }else if (!(month==1) || !(month==2) || !(month==3) || !(month==4) || !(month==5) || !(month==6) || !(month==7) || !(month==8) || !(month==9) || !(month==10) || !(month==11) || !(month==12)){
      printf("Invalid Month, Bitch Are You Dumb Try Again MF:\n");
      
  }
   }
   
   
   /*
   int days;
   printf("Enter number of days to be added");
   scanf("%d",&days);
   if (month==1)

   */

   
   
   
   printf("ENTERED DATE IN DD-MM-YY Format: %d-%d-%d",date, month, year);
}