#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqroot);

int main()
{
    input();
}

float input()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    square_root(num);
}

float square_root(float n)
{
    float x=n,y=1,limit=0.0001;
    while ((x-y)>limit)
    {
        x=(x+y)/2;
        y=n/x;
    }
    
    output(n,x);
}

void output(float n, float sqroot)
{
    printf("Square root of %.0f is %.4f",n,sqroot);
}