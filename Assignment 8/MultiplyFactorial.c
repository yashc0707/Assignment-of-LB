#include<stdio.h>

int MultiplyFactorial(int iNo)
{
    int iMul=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        iMul=iMul*iCnt;

    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=MultiplyFactorial(iValue);
    printf("Factorial is:%d",iRet);
    
    return 0;
}