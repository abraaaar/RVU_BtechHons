#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    input_n();
}

int input_n()
{
    int n;
    printf("Enter number of triangles: ");
    scanf("%d",&n);
    Triangle a[n];
    input_n_triangles(n,a);
}

void input_n_triangles(int n, Triangle t[n])
{
    for (int i=0; i<n; i++)
    {
        printf("\nTRIANGLE %d INPUT",i+1);
        printf("\nBase: ");
        scanf("%f",&t[i].base);
        printf("Altitude: ");
        scanf("%f",&t[i].altitude);
    }
    find_n_areas(n,t);
}

void find_n_areas(int n, Triangle t[n])
{
    for (int i=0; i<n; i++)
    {
        t[i].area=0.5*t[i].base*t[i].altitude;
    }
    find_smallest_triangle(n,t);
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle s=t[0];
    for (int i=1; i<n; i++)
    {
        if (t[i].area<s.area)
        {
            s=t[i];
        }
    }
    output(n,t,s);
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("\nThe smallest triangle out of triangles with base and height (%.f,%.f) ",t[0].base,t[0].altitude);
    for (int i=1; i<n; i++)
    {
        printf(", (%.f,%.f) ",t[i].base,t[i].altitude);
    }
    printf("is the triangle having base %.f, height %.f and area %.1f",smallest.base,smallest.altitude,smallest.area);
}