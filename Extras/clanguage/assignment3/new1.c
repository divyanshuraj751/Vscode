#include <stdio.h>
int main()
{
    int year,check1,check2,check3;
    printf("Enter the year which you want to check it is a leap year or not\n");
    scanf("%d", &year);

    check1=year % 400;
    check2=year % 4;
    check3=year % 100;


    if(check1==0)
    {
        printf("The year is a leap year\n");
    }
    else if(check2==0)
    {
        printf("The year is a leap year\n");
    }
    else if(check3==0)
    {
        printf("The year is not a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    return 0;
}