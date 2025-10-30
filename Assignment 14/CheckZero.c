#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit= iNo%10;
        
        if(iDigit==0)
        {
            return true;
        }
        iNo=iNo/10;
        
    }
    return false;
}
int main()
{
    int iValue=0;
    bool bRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);
    if(bRet==true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}