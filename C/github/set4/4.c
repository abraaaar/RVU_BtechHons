#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
    int deg=input_degree();
    float a[deg];
    input_coefficients(deg,a);
    float x=input_x();
    float res=evaluate_polynomial(deg, a, x);
    output(deg, a, x, res);
}

int input_degree()
{
    int n;
    printf("Enter degree: ");
    scanf("%d",&n);
    return n;
}

void input_coefficients(int n, float a[n])
{
    for (int i=0; i<n; i++)
    {
        printf("Enter Coefficient %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

float input_x()
{
    float x;
    printf("How to calculate our interest an");


    return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
    float res;



    return res;
}

void output(int n, float a[n], float x, float result)
{
    
}
