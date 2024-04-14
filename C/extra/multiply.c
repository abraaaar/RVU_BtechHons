#include <stdio.h>
#define L 100000
int main()
{       
    int n1, n2;
    int rem1,rem2,mul;
    int carry=0;
    printf("Enter a two digit number: ");
    scanf("%d",&n1);
    printf("Enter 2nd two digit number: ");
    scanf("%d",&n2);

    int arr[L];

    for (int i=0;i<2;i++)
    {
        rem1= n1%10;
        rem2= n2%10;
        mul=rem1*rem2;
        arr[i]=(mul%10)+carry;
        carry=mul/10;
        n1/=10;
        n2/=10;

    }
    printf("\n%d%d",arr[1],arr[0]);
}