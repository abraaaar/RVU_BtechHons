#include <stdio.h>
#include <math.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int num1,num2,den1,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
}

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter first fraction as p/q: ");
    scanf("%d/%d",num1,den1);
    printf("Enter second fraction as p/q: ");
    scanf("%d/%d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    int m=1, n1=num1, n2=num2, d1=den1, d2=den2;
    if (den1 != den2)
    {
        for ( int i = 1 ;i<=den1*den2; i++ )
        {   
             if (i%den1 == 0 && i%den2 == 0)
             {
                m=i;
                break;
             }
        }
    n1*=m;n1/=d1;den1*=m;den1/=d1;
    n2*=m;n2/=d2;den2*=m;den2/=d2;
    *res_num=n1+n2;
    *res_den=den1;
    }
    else 
    {
        *res_num=num1+num2;
        *res_den=den1;
    }
    // int l=(*res_num>*res_den?*res_num:*res_den);
    // for (int i=2 ; i<=(l==*res_num?*res_den:*res_num) ; i++)
    // {
    //     if (*res_num%i==0 && *res_den%i==0)
    //     {
    //         *res_num/=i;*res_den/=i;
    //     }
    // }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}