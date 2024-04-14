#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int main()
{
    Fraction f[3];
    for (int i=0; i<3; i++)
    {
        printf("Enter FRACTION %d: ",i+1);
        scanf("%d/%d",&f[i].num,&f[i].den);
    }
    float a=f[0].num/f[0].den, b=f[1].num/f[1].den, c=f[2].num/f[2].den;
    int s;
    if (a<b && a<c)
    {
        s=1;
    }

    else if (b<a && b<c)
    {
        s=2;
    }  

    else if (c<a && c<b)
    {
        s=3;
    }

    else if ((c==a && c<b) || (a==b && a==c))
    {
        s=3;

    }

    else if ((b==c && b<a) || (b==a && b<c))
    {
        s=2;
    }

    int rnum, rden;

    if (s == 1)
    {
        rnum=f[0].num;
        rden=f[0].den;
    }

    else if (s == 2)
    {
        rnum=f[1].num;
        rden=f[1].den;
    }

    else if (s == 3)
    {
        rnum=f[2].num;
        rden=f[2].den;
    }

    printf("The smallest of the fractions %d/%d, %d/%d, and %d/%d is %d/%d",f[0].num,f[0].den,f[1].num,f[1].den,f[2].num,f[2].den,rnum,rden);

}