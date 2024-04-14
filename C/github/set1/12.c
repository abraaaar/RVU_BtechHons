#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    get_n();
}

int get_n()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d",&n);
    Complex c[n];
    input_n_complex(n,c);
}

void input_n_complex(int n, Complex c[n])
{
    for (int i=0; i<n; i++)
    {
        printf("\nInput for number %d",i+1);
        printf("\nEnter real part: ");
        scanf("%f",&c[i].real);
        printf("Enter imaginary part: ");
        scanf("%f",&c[i].imaginary);
    }
    add_n_complex(n,c);
}

Complex add_n_complex(int n, Complex c[n])
{
    Complex sum;
    sum.real=0;
    sum.imaginary=0;
    for (int i=0; i<n; i++)
    {
        sum.real+=c[i].real;
        sum.imaginary+=c[i].imaginary;
    }
    output(n,c,sum);
}

void output(int n, Complex c[n], Complex result)
{
    printf("The sum of (%.0f+%.0fi)",c[0].real,c[0].imaginary);
    for (int i=1; i<n; i++)
    {
        printf("+(%.0f+%.0fi)",c[i].real,c[i].imaginary);
    }
    printf("=%.0f+%.0fi",result.real,result.imaginary);
}