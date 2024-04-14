#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float b, h;
    input(b, h);

}

void input(float base, float height)
{
    float area;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);
    find_area(base, height,&area);
    output(base, height, area);
    
}

void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
    
}

void output(float base, float height, float area)
{
    printf("The area of triangle with base=%.1f and height=%.1f is %.1f",base, height, area);
}