#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int area=is_triangle(x1,y2,x2,y2,x3,y3);
    printf("\n\narea= %d\n\n",area);
    output(x1,y1,x2,y2,x3,y3,area);
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("\n****Enter x and y coordinates of point 1****\n");
    printf("Enter x coordinate: ");
    scanf("%f",x1);
    printf("Enter y coordinate: ");
    scanf("%f",y1);

    printf("\n\n****Enter x and y coordinates of point 2****\n");
    printf("Enter x coordinate: ");
    scanf("%f",x2);
    printf("Enter y coordinate: ");
    scanf("%f",y2);

    printf("\n\n****Enter x and y coordinates of point 3****\n");
    printf("Enter x coordinate: ");
    scanf("%f",x3);
    printf("Enter y coordinate: ");
    scanf("%f",y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int a1=x1, a2=x2, a3=y3, b1=y1, b2=y2, b3=y3;
    printf("\n\n\npoints in trianfle   (%d, %d),(%d, %d),(%d, %d) \n\n",a1,b1,a2,b2,a3,b3);
    int a= 0.5*((a1*(b2-b3)) + (a2*(b3-b1)) + (a3*(b1-b2)));
    return a;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result == 0)
    {
        printf("\nThe points (%.f,%.f),(%.f,%.f),(%.f,%.f) do not form a triangle ",x1,y1,x2,y2,x3,y3);
    }

    else
    {
         printf("\nThe points (%.f,%.f),(%.f,%.f),(%.f,%.f) form a triangle ",x1,y1,x2,y2,x3,y3);
    }
}