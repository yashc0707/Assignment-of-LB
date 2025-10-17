#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }

    
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter The 1st Number:");
    scanf("%d",&iValue);

    printf("Enter The 2nd Number:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}