#include <stdio.h>
int main()
{
    int num;
    printf("Enter: \n1 for Yes\t\t2 for No");
    scanf("%d",&num);
    (num==1)?printf("YES"):printf("NO");
    return 0;
}