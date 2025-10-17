#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");

    }

    return 0;
}