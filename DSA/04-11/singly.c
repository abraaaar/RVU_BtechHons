#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}LL;

LL *head;
LL *tail;


//Using functions 


void addNode(int data);
int countNodes();
void display();

int main()
{
    //addnode
    int n, i=0, data;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&data);
        addNode(data);
        i++;
    }

    //countnodes
    printf("\nThe total number of nodes are: %d",countNodes());

    //display
    printf("\nThe linked list is: ");
    display();
}

void addNode(int data)
{
    LL *newNode = (LL*)malloc(sizeof(LL));  
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        head->next = NULL;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int countNodes()
{
    int count = 0;
    LL *current = head;
    while (current != NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}

void display()
{
    LL *current = head;
    if (head == NULL)
    {
        printf("The Linked List is empty.");
        exit(0);
    }
    printf("Nodes of the singly linked list are: ");
    
    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}



//Using Arrays

// int main()
// {
//     int n;
//     printf("How many elements you want to store: ");
//     scanf("%d", &n);

//     struct linkedlist* S[n];

//     for (int i = 0; i < n; i++)
//     {
//         S[i] = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//         printf("Enter the element %d: ", i + 1);
//         scanf("%d", &S[i]->data);

//         if (S)
//         if (i == n - 1)
//         {
//             S[i]->next = NULL;
//         }
//         else
//         {
//             S[i]->next = S[i + 1];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nelement %d =  %d", i + 1, S[i]->data);
//         free(S[i]);
//     }

// }