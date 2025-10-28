#include<stdio.h>

void CheckLeapYear(int iyear)
{
    if(iyear==366)
    {
        printf("It is a leap Year");

    }
    else
    {
        printf("It is not leap year");
    }

}

int main()
{
    int iYr;

    printf("Enter Year Days:");
    scanf("%d",&iYr);

    CheckLeapYear(iYr);

    return 0;
}