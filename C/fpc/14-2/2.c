#include <stdio.h>

typedef struct
{
    char name[50];
    int age ;
    int roll;
}Hello;

Hello input();
void output(Hello *details);

int main()
{
    Hello s;
    s=input();
    output(&s);

}

Hello input()
{
    Hello s;
    printf("Enter name: ");
    scanf("%[^\n]s",s.name);
    printf("Enter roll no. : ");
    scanf("%d",&s.roll);
    printf("Enter age: ");
    scanf("%d",&s.age);
    return s;
}

void output(Hello *details)
{
    printf("\nDetails of Student\nName: %s\t\tRoll No. : %d\t\tAge: %d",details->name,details->roll,details->age); //ptr->name == &(    ).name 
}