#include <stdio.h>
int input();
int sum_num(int *n1, int* n2);
void output(int* n1 , int* n2, int* sum);
int main()
{
    int n1=input();
    int n2=input();
    int *sum;
    *sum=sum_num(&n1,&n2);

    return 0;
}

int input()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    return n;
}
int sum_num(int *n1, int* n2)
{
    int sum= *n1 + *n2;
    return sum;
}
void output(int* n1 , int* n2, int* sum)
{
    printf("%d + %d = %d",n1,n2,sum);
}