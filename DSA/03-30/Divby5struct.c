#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENTS 5
typedef struct FPC
{
    char name[50];
    int marks;
}FPC;
FPC MyStructure[STUDENTS], MyDivBy5Stack[STUDENTS];
int top=-1;
void push(FPC st[]);
void pop(FPC st[]);
void peek(FPC st[]);


int main()
{
    for (int i=0; i<STUDENTS; i++)
    {
        printf("\nEnter Details for STUDENT %d\nEnter name: ",i+1);
        scanf("%s",MyStructure[i].name);
        printf("Enter marks: ");
        scanf("%d",&MyStructure[i].marks);
    }
    printf("\n\n\nMyStructure: ");
    for (int i=0; i<STUDENTS; i++)
    {
        printf("\nSTUDENT %d:  Name: %s\tMarks:%d",i+1, MyStructure[i].name, MyStructure[i].marks);
    }
    push(MyStructure);
    pop(MyDivBy5Stack);
    peek(MyDivBy5Stack);
    printf("\n\nFinal MyDivBy5Stack is:");
    for (int i=0; i<=top; i++)
    {
        printf("\nName: %s\tMarks: %d",MyDivBy5Stack[i].name,MyDivBy5Stack[i].marks);
    }
}

void push(FPC st[])
{
    printf("\n\nPUSHING\nMyDivBy5Stack: ");
    for (int i=0; i<STUDENTS; i++)
    {
        if (st[i].marks%5 == 0)
        {
            top++;
            strcpy(MyDivBy5Stack[top].name,st[i].name);
            MyDivBy5Stack[top].marks=st[i].marks;
        }
    }
    for (int i=0; i<=top; i++)
    {
        printf("\nName: %s\tMarks: %d",MyDivBy5Stack[i].name,MyDivBy5Stack[i].marks);
    }
}

void pop(FPC st[])
{
    printf("\n\nPOPPING\nPopped students:\n");
    int count=0;
    for (int i=0; i<=top; i++)
    {
        if ((st[i].marks==5) || (st[i].marks==25))
        {
            printf("Name: %s\tMarks: %d\n",st[i].name,st[i].marks);
            for (int j=i+1; j<=top; j++)
            {
                st[j-1].marks=st[j].marks;
                strcpy(st[j].name,st[j-1].name);
            }
            count++;
            i--;
        }
    }
    if (count>0)
    {
        for (int i=1; i<=count; i++)
        {
            top--;
        }
    }
}

void peek(FPC st[])
{
    printf("\nPEEK\nTop Value= %d\nTop Name: %s\tTop Marks: %d",top,st[top].name,st[top].marks);
}