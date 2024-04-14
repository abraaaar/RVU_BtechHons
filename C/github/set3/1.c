#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    find_distance(x1,y1,x2,y2);
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("\nEnter x and y coordinates of point 1\n");
    printf("Enter x coordinate: ");
    scanf("%f",&*x1);
    printf("Enter y coordinate: ");
    scanf("%f",&*y1);

    printf("\n\nEnter x and y coordinates of point 2\n");
    printf("Enter x coordinate: ");
    scanf("%f",&*x2);
    printf("Enter y coordinate: ");
    scanf("%f",&*y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float d=sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    output(x1,y1,x2,y2,d);
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between (%.f,%.f) and (%.f,%.f) is %.4f",x1,y1,x2,y2,distance);
}