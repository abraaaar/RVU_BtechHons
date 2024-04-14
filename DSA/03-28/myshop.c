#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{   
    struct myShop
    {
        char name[30];
        int quantity;
        float unitprice;

    }myShopArray[N];
    
    
    for (int i=0; i<N; i++)
    {
        printf("\nItem %d\nEnter name: ",i+1);
        scanf("%s",myShopArray[i].name);
        printf("Enter quantity: ");
        scanf("%d",&myShopArray[i].quantity);
        printf("Enter unitprice: ");
        scanf("%f",&myShopArray[i].unitprice);
    }

    for (int i=0; i<N; i++)
    {
        printf("\nName: %s\tQuantity=%d\tUnit Price=%.2f\tTotal Cost=%.2f",myShopArray[i].name,myShopArray[i].quantity,myShopArray[i].unitprice,myShopArray[i].quantity*myShopArray[i].unitprice);
    }
}