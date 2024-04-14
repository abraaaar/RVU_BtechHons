#include <stdio.h>

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);


int main()
{ 
    float x1, x2, x3, y1, y2, y3;
    printf("\n\n****Enter x and y coordinates of point 1****\n");
    printf("Enter x coordinate: ");
    scanf("%f",&x1);
    printf("Enter y coordinate: ");
    scanf("%f",&y1);

    printf("\n\n****Enter x and y coordinates of point 2****\n");
    printf("Enter x coordinate: ");
    scanf("%f",&x2);
    printf("Enter y coordinate: ");
    scanf("%f",&y2);

    printf("\n\n****Enter x and y coordinates of point 3****\n");
    printf("Enter x coordinate: ");
    scanf("%f",&x3);
    printf("Enter y coordinate: ");
    scanf("%f",&y3);
    int area= is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1, y1, x2, y2, x3 ,y3, area);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int area= 0.5*((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2)));
    return area;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result == 0)
    {
        printf("\nThe points (%0.1f,%0.1f) , (%0.1f,%0.1f) , (%0.1f,%0.1f) do not form a triangle ",x1,y1,x2,y2,x3,y3);
    }

    else
    {
         printf("\nThe points (%0.1f,%0.1f) , (%0.1f,%0.1f) , (%0.1f,%0.1f) form a triangle ",x1,y1,x2,y2,x3,y3);
    }
}