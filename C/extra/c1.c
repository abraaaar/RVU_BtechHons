#include <stdio.h>
int main()
{
    // struct 
    // {
    //         int date, month, year;
    // }a;

    // printf("Enter Date,Month and Year");
    // scanf("%d%d%d",a.date,a.month,a.year);
    int year=2024;
    if (year%400==0 || !(year%100==0) && (year%4==0))
    {
        printf("\nis a leap year");
    } 
    else 
    {
        printf("\nis not");
    }  
}

