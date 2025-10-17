#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }

}

int main()
{
    int iValue=0;

    printf("Enter Number of Stars:");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;

}
