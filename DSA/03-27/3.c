    #include <stdio.h>
    #include <stdlib.h>
    #define N 1000
    int top=-1;


    void peek(int a[]);
    void pop(int a[]);
    void push(int a[]);

    int main()
    {
        char wow;
        int stack[N];
        int num;
        
        while (1)
        {
            printf("\nChoose what you wanna do (1/2/3/4) \n1. Peek\t\t2. Pop\t\t3. Push\t\t4. Exit Program :- ");
            scanf("%d",&num);
            if (num==1)
            {
                peek(stack);
            }
            else if (num==2)
            {
                pop(stack);
            }
            else if (num==3)
            {
                push(stack);
            }
            else if (num==4)
            {
                exit(0);
            }
            else
            {
                printf("Invalid Output, Try Again\n");
                continue;
            }
        }
    }

    void peek(int a[])
    {
        if (top==-1)
        {
            printf("The stack is empty");
        }
        else
        {
            printf("Top value: %d",a[top]);
        }
        printf("\nTop = %d",top);
    }

    void pop(int a[])
    {
        if (top == -1)
        {
            printf("Stack underflow\nTop = -1");
        }
        else
        {
            printf("Popped element: %d\n", a[top]);
            top--;
            if (top == -1)
            {
                printf("Stack has become empty");
            }
            else
            {
                printf("New Stack: ");
                for (int i = 0; i <= top; i++)
                {
                printf("%d ", a[i]);
                }
                printf("\nTop = %d",top);
            }
        }
    }

    void push(int a[])
    {
        int num;
        if (top == N - 1)
        {
            printf("Stack overflow\n");
            exit(0);
        }
        printf("Enter the number to push: ");
        scanf("%d", &num);
        top++;
        a[top] = num;
        
        printf("New Stack: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nTop = %d",top);
    }