#include<stdio.h>

int MultiplyDigit(int iNo)
{
    int iDigit=0;
    int iMul=1;

    while(iNo>0)
    {
        iDigit= iNo%10;
        iMul=iMul*iDigit;
        iNo=iNo/10;
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=MultiplyDigit(iValue);
    printf("%d",iRet);

    return 0;
}