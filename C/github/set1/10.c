#include <stdio.h>
#include <string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char s1[30], s2[30];
    input_two_strings(s1, s2);
    stringcompare(s1, s2);
}

void input_two_strings(char *string1, char *string2)
{
    printf("Enter string 1: ");
    scanf("%s",string1);
    string1[strlen(string1)]='\0';
    printf("Enter string 2: ");
    scanf("%s",string2);
    string2[strlen(string2)]='\0';
}

int stringcompare(char *string1, char *string2)
{
    int gg;
    for (int i=0; i<(strlen(string1)>strlen(string2)?strlen(string1):strlen(string2)); i++ )
    {
        if (string1[i]>string2[i])
        {
            gg=1;
            break;
        }

        else if (string2[i]>string1[i])
        {
            gg=2;
            break;
        }        

    }
    output(string1,string2,gg);
}

void output(char *string1, char *string2, int result)
{
    if (result==1)
    {
        printf("%s  >  %s",string1,string2);
    }
    else if (result==2)
    {
        printf("%s  >  %s",string2,string1);
    }
}