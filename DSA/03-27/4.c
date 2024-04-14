#include <stdio.h>
#include <string.h>
int main()
{
    char a[6]={'R','V','U','N','I','!'};
    int len=strlen(a);
    int len2=sizeof(a)/sizeof(a[0]);
    // printf("Length of String using strlen(): %d\nLength of String using sizeof(): %d\n",len,len2);
    printf("\nNow let us insert a null terminator i.e '\\0'\n");
    a[3]='\0';
    len=strlen(a);
    len2=sizeof(a)/sizeof(a[0]);
    printf("\nNew Length of String using strlen(): %d\nNew Length of String using sizeof(): %d\n",len,len2);
    printf("\nAs we can see, the sizeof() operator and the strlen() operator both show different lenghts of the string when we use the null terminator.");
    //int array
    int n,i;
    printf("\nEnter no. of elements of an array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    //character array(string)
    char b[20];
    printf("Enter character array\n");
    scanf("%s",&b);
    printf("Your character array is:\n");
    printf("%s",b);
}
