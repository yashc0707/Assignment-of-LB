#include<stdio.h>

void Table(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int iCnt=10;iCnt>=1;iCnt--)
    {
        int iMul=iNo*iCnt;
        printf("%d\t",iMul);

    }
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}