#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node* next;
};
struct node*head =NULL;
struct node*tail = NULL;
void insert(data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(head== NULL)
    {
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
int main()
{
    char data;
    while(1)
    {
        scanf("%d",&data);
        if(data == ' ')
        {
            break;
        }
        else{
            insert(data);
        }
    }
    int count = 0;
    while (head != NULL)
    {
        if (head->data == 'e')
        {
            count++;
        }
        head = head->next;
    }
     printf("%d", count);
   
}