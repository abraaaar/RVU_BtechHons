#include <stdio.h>

typedef struct
{
    char name[50];
    int roll;
    int age;
    float weight;
    float marks;

}Stu;
int number_of_students();
Stu details(int number);
void output(int number ,Stu var[]);

int main()
{
    
    int num=number_of_students();
    details(num);
}

int number_of_students()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    return n;
}

Stu details(int number)
{
    Stu a[number];
    for (int i=0; i<number; i++)
    {
        printf("INPUT STUDENT %d DETAILS",i+1);
        printf("\nEnter name: " );
        scanf("%s",a[i].name);
        printf("Enter roll no: ");
        scanf("%d",&a[i].roll);
        printf("Enter age: ");
        scanf("%d",&a[i].age);
        printf("Enter weight: ");
        scanf("%f",&a[i].weight);
        printf("Enter marks: ");
        scanf("%f",&a[i].marks);
        printf("\n");
    }
    output(number, a);
}

void output(int number, Stu var[])
{   
    for (int i=0; i<number; i++)
    {
        printf("Details of Student %d",i+1);
        printf("\nName: %s\t\tRollNo: %d\t\tAge: %d\t\tWeight: %.1f\t\tMarks: %.1f\n\n",var[i].name,var[i].roll,var[i].age,var[i].weight,var[i].marks);
    }
}