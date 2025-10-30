#include<stdio.h>

int OddFactorial(int iNo)
{
    int iMul=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {

            iMul=iMul*iCnt;

        }
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);
    printf("Odd Factorial is:%d",iRet);

    return 0;
}