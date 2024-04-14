#include <stdio.h>
void input();
int sum_num(int *n1, int* n2);
void output(int n1, int n2, int sum);
int main()
{
    input();
    return 0;
}

void input()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);
    int sum = sum_num(&n1, &n2);
    output(n1, n2, sum);
}
int sum_num(int *n1, int* n2)
{
    int sum= *n1 + *n2;
    return sum;
}
void output(int n1, int n2, int sum)
{
    printf("%d + %d = %d",n1,n2,sum);
}