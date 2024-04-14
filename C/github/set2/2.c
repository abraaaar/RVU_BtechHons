#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    input_side();
}

int input_side()
{
    int a,b,c;
    printf("Enter 1st side: ");
    scanf("%d",&a);
    printf("Enter 2nd side: ");
    scanf("%d",&b);
    printf("Enter 3rd side: ");
    scanf("%d",&c);
    check_scalene(a,b,c);
}

int check_scalene(int a, int b, int c)
{
    int i=1;
    if (a==b || b==c || c==a)
    {
        i=0;
    }
    output(a,b,c,i);
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("The triangle with sides %d,%d and %d is scalene",a,b,c);
    }
    else if(isscalene==0)
    {
        printf("The triangle with sides %d,%d and %d is not scalene",a,b,c);
    }
}