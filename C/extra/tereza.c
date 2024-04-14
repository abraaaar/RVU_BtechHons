#include <stdio.h>

float calc(float qty,float price)
{
    float cost=qty*price;
    return cost;
}

void pay(float cost)
{
    int pay;
    

 while(1)
 {  
    printf("how do you want to pay: \n 1. cash \n 2. card \n");
    scanf("%d",&pay);
    if (pay==1)
    {
        int yn;
        

      while(1)
      {
        printf("do you have change? \n 1. yes \n 2. no \n");
        scanf("%d",&yn);
        if (yn==1)
        {
            printf("please pay %0.1f",cost);
            break;
        }
        else if (yn==2)
        {
            int y;
            

          while(1)
          {
            printf("are you paying in 100 notes \n 1. yes \n 2. no \n");
            scanf("%d",&y);
            if (y==1)
            {
                float a=cost/100;
                int b=(int)(a+1);
                printf("the number of hundreds to be paid by you: %d \n",b);

                float bal=(b*100)-cost;
                printf("the balance to be returned to you: %0.1f",bal);

                break;                
            }
            else if (y==2)
            {
                float amt;
                printf("enter the amount paid: ");
                scanf("%f",&amt); 

                float bal=amt-cost;
                printf("the balance to be returned to you: %0.1f ",bal);

                break;
            } 
            else
            {
                printf("INVALID INPUT, TRY AGAIN\n");
            }

            
          }
          break;
        } 
        else
        {
            printf("INVALID INPUT, TRY AGAIN\n");
        }
      }

        break;
    }

    else if (pay==2)
    {
        printf("please pay %0.1f",cost);
        break;
    }

    else
    {
        printf("INVALID INPUT, TRY AGAIN\n");
    }
 }


}

int main()
{
    char item[10];
    float qty,price;
    printf("enter the name of the item: ");
    scanf("%s",&item);
    printf("Enter the quantity of items: ");
    scanf("%f",&qty);
    printf("enter the price of the item: ");
    scanf("%f",&price);

    float cost=calc(qty,price);
    printf("\nThe Cost of %s is %0.1f \n",item,cost);

    pay(cost);
}