#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a[100],ra[100];
    input_string(a);
    str_reverse(a,ra);
    output(a,ra);
}

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%[^\n]s",a);
}

void str_reverse(char *str, char *rev_str)
{
    int l=strlen(str);
    for (int i=0; i<l; i++)
    {
        rev_str[i]=str[l-i-1];
    }
    rev_str[l]='\0';
}

void output(char *a, char *reverse_a)
{
    printf("Entered: %s\t\tReversed: %s",a,reverse_a);
}