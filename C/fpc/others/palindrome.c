/*
#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int count=0;
    while(1){
        int a=num%10;
        int b=num-a;
        int c=b/10;
        count++;
        if (c==0){
            break;
        }
        num=c;
    }printf("The number is %d",count);
}
*/

#include <stdio.h>
int main()
{
        int num, rem, rev=0;
        printf("Enter the number: ");
        scanf("%d",&num);
        int a=num;

        while (num!=0)
        {
            rem=num%10;
            rev=(rev*10)+rem;
            num/=10;
        }

        if (a==rev)
        {
            printf("%d is a Palindrome",a);
        }

        else
        {
            printf("%d is not a Palindrome",a);
        }


}

