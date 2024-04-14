#include <stdio.h>

int main()
{
    int month, date;
    int year,b;
    while(1)
    {
        printf("Enter the year:" );
        scanf("%d",&year);
        if (year%400==0)
        {
          b=1;
          break;
        }
        else if (year%100==0)
        {
          b=0;
          break;
        }
        else if (year%4==0)
        {
          b=1;
          break;
        }
        else if (year>0)
        {
          break;
        }
        else 
        {
          printf("Invalid Input, Try Again\n");
        }
     }
    
      while (1)
      {
        printf("Month: ");
        scanf("%d",&month);
        if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        {
          while (1)
          {
            printf("Date: ");
            scanf("%d",&date);
            if (date>0 && date<=31)
            {
              break;
            }

            else
            {
              printf("Invalid Date,Try Again\n");
            }
          }
            break;
        }
      
        else if (month==4 || month==6 || month==9 || month==11)
        {
          while (1)
          {  
            printf("Date: ");
            int scan4= scanf("%d",&date);
            if (date>0 && date<=30)
            {
              break;
            }  
            else
            {
              printf("Invalid Date, Try Again\n");
            }
          }
        
          break;
        }

        else if (month==2)
        {
          while (b==0)
          {
            printf("Date: ");
            scanf("%d",&date);
            if (date>0 && date<=28)
            {
              break;
            }  
            else
            {
               printf("Invalid Date, Try Again\n");
            }
          }

          while (b==1)
          {
            printf("Date: ");
            scanf("%d",&date);
            if (date>0 && date<=29)
            {
               break;
            }  
            else
            {
               printf("Invalid Date, Try Again\n");
            }
          }
        
          break;
      
        }
      
        else if (!(month==1) || !(month==2) || !(month==3) || !(month==4) || !(month==5) || !(month==6) || !(month==7) || !(month==8) || !(month==9) || !(month==10) || !(month==11) || !(month==12))
        {
          printf("Invalid Month, Try Again\n");
        }
      }

      printf("DISPLAY: Date is: %d.%d.%d",date, month, year);
}