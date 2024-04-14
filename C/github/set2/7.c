#include <stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    input_triangle();
}

Triangle input_triangle()
{
    Triangle a;
    printf("Enter base: ");
    scanf("%f",&a.base);
    printf("Enter altitude: ");
    scanf("%f",&a.altitude);
    find_area(&a);
    output(a);
}

void find_area(Triangle *t)
{
   (*t).area=(*t).base*(*t).altitude*0.5;
}

void output(Triangle t)
{
    printf("The area of triangle with base=%.f and altitude=%.f is %.1f",t.base,t.altitude,t.area);
}