#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    input_complex();
}

Complex input_complex()
{
    Complex a,b;
    printf("Enter real part of first number: ");
    scanf("%f",&a.real);
    printf("Enter imaginary part of first number: ");
    scanf("%f",&a.imaginary);
    printf("Enter real part of second number: ");
    scanf("%f",&b.real);
    printf("Enter imaginary part of second number: ");
    scanf("%f",&b.imaginary);
    add_complex(a,b);
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    output(a,b,sum);
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %.0f+%.0fi and %.0f+%.0fi is %.0f+%.0fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}