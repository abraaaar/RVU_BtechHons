#include <stdio.h>
int input_size();
void input_array(int n, int a[]);
int find_largest_index(int n, int a[]);
void output(int index);

int main()
{
    int size=input_size();
    int a[size];
    input_array(size,a);
    int lar=find_largest_index(size, a);
    output(lar);
}

int input_size()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[])
{
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[])
{
    int lar=0;
    for (int i=1; i<n; i++)
    {
        if (a[i]>a[lar])
        {
            lar = i;
        }
    }
    return lar;
}

void output(int index)
{
    printf("The index of the largest number in the array is %d",index);
}