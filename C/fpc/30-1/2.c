#include <stdio.h>

typedef struct
{
    char name[50];
    int roll;
    int age;
    float weight;
    float marks;

}Stu;
Stu input();

int main()
{
    Stu s1=input();
    Stu s2=input();
    printf("Details of Student 1");
    printf("\nName: %s\t\tRollNo: %d\t\tAge: %d\t\tWeight: %.1f\t\tMarks: %.1f\n\n",s1.name,s1.roll,s1.age,s1.weight,s1.marks);
    printf("Details of Student 2");
    printf("\nName: %s\t\tRollNo: %d\t\tAge: %d\t\tWeight: %.1f\t\tMarks: %.1f\n\n",s2.name,s2.roll,s2.age,s2.weight,s2.marks);
}

Stu input()
{
    Stu a;
        printf("\nINPUT STUDENT DETAILS");
        printf("\nEnter name: " );
        scanf("%s",a.name);
        printf("Enter roll no: ");
        scanf("%d",&a.roll);
        printf("Enter age: ");
        scanf("%d",&a.age);
        printf("Enter weight: ");
        scanf("%f",&a.weight);
        printf("Enter marks: ");
        scanf("%f",&a.marks);
    return a;
}