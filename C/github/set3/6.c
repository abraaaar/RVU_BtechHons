#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char st,sub;
    input_string(&st,&sub);
    int index=sub_str_index(&st,&sub);
    output(&st,&sub,index);
}

void input_string(char* a, char* b)
{
    printf("Enter the string: ");
    scanf("%s",a);
    printf("Enter the substring: ");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int index;
    for (int i=0;i<strlen(string); i++)
    {
        for (int j=0; j<strlen(substring); j++)
        {
            if (substring[j]==string[i])
            {
                printf("This is a "); 
            }
        }
    }
}

void output(char *string, char *substring, int index)
{
    printf("Substring: %s   in   String: %s   at Index: %d ",string,substring,index);
}
