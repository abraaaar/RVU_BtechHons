#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int num=input_n();
    Fraction f[num];
    input_n_fractions(num, f);
}

int input_n()
{
    int n; 
    printf("Enter the number of fractions: ");
    scanf("%d",&n);
    return n;
}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i=0; i<n; i++)
    {
        printf("Enter Fracton(p/q) %d: ",i+1);
        scanf("%d/%d",f[i].num,f[i].den);
    }
}

int find_gcd(int a, int b)
{
    
}
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);