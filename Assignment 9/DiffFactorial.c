#include<stdio.h>

int DiffFactorial(int iNo)
{
    int iEven=1;
    int iOdd=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {

            iEven=iEven*iCnt;

        }

        if(iCnt%2!=0)
        {

            iOdd=iOdd*iCnt;

        }

    }
    return (iEven-iOdd);
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=DiffFactorial(iValue);
    printf("Difference is:%d",iRet);

    return 0;
}