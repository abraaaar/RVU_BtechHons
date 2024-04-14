#include <stdio.h>
#include <stdlib.h>

void merge(int a1[], int a2[], int s1, int s2)
{
    int onein = 0, twoin = 0, wow=0, final[s1+s2], comparisons = 0;
    while (onein < s1 && twoin < s2)
    {
        comparisons++;
        if (a1[onein] <= a2[twoin])
        {
            final[wow++] = a1[onein++];
        }
        else
        {
            final[wow++] = a2[twoin++];
        }
    }
    while(onein < s1)
    {
        final[wow++] = a1[onein++];
    }
    while(twoin < s2)
    {
        final[wow++] = a2[twoin++];
    }
    
    printf("%d\n", comparisons);
    for(int i = 0; i< s1+s2; i++)
    {
        printf("%d ",final[i]);
    }
}
int main() 
{
    int s1,s2;
    scanf("%d",&s1);
    int a1[s1];
    if (s1 != 0)
    {   
        for (int i = 0; i< s1; ++i)
        {
            scanf("%d",&a1[i]);
        }
    }
    scanf("%d",&s2);
    if (s1==0 && s2==0)
    {
        printf("-1\n");
        return 0;
    }
    else if (s2==0)
    {
        printf("0\n");
        for (int i = 0; i< s1; ++i)
        {
            printf("%d ", a1[i]);
        }
        return 0;
    }
    int a2[s2];
    for (int i = 0; i< s2; ++i)
    {
        scanf("%d",&a2[i]);
    }
    if (s1==0)
    {
        printf("0\n");
        for (int i = 0; i< s2; ++i)
        {
            printf("%d ", a2[i]);
        }
        return 0;
    }
    
    
    merge(a1, a2, s1, s2);
    return 0;
}
