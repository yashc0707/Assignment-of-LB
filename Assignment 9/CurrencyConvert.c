#include<stdio.h>

int DollerToINR(int iNo)
{
    int iCon=0;
    iCon=iNo*70;

    return iCon;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the $ Currency:");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);
    printf("Converted Price is:%d",iRet);

    return 0;
}