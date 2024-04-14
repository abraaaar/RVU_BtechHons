#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}


void permute(char *str, int l, int r)
{
    static int count = 0;
    if (l == r)
    {
        printf("%d: %s\n", ++count, str);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            int j, flag = 0;
            for (j = l; j < i; j++)
            {
                if (str[i] == str[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                swap((str + l), (str + i));
                permute(str, l + 1, r);
                swap((str + l), (str + i));
            }
        }
    }
}


int main()
{
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, strlen(str) - 1);
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void swap(char *x, char *y)
// {
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void permute_tail(char *str, int l, int r, char *acc, int *count)
// {
//     if (l == r)
//     {
//         printf("%d: %s\n", ++(*count), acc);
//     }
//     else
//     {
//         for (int i = l; i <= r; i++)
//         {
//             int j, flag = 0;
//             for (j = l; j < i; j++)
//             {
//                 if (str[i] == str[j])
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (!flag)
//             {
//                 char temp = str[i];
//                 str[i] = str[l];
//                 str[l] = temp;
//                 acc[l] = str[l];
//                 permute_tail(str, l + 1, r, acc, count);
//             }
//         }
//     }
// }

// void permute(char *str, int l, int r)
// {
//     static int count = 0;
//     char acc[100] = {0};
//     permute_tail(str, l, r, acc, &count);
// }


// int main()
// {
//     char str[100];
//     printf("Enter a word: ");
//     scanf("%s", str);
//     int n = strlen(str);
//     permute(str, 0, strlen(str) - 1);
// }
