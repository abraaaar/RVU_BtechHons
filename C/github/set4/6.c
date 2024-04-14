#include <stdio.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char s[100];
    input_string(&s);
    int c=count_words(&s);
    output(s, c);
}

void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%[^\n]s",a);
}

int count_words(char *string)
{
    
}
void output(char *string, int no_words);
