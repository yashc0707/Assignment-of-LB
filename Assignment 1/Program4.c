#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo%5==0)
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

    bRet=Check(iValue);

    if(bRet==true)
    {
        printf("Number is Divisible by 5 ");
    }

    else
    {
        printf("Number is not Divisible by 5");
    }

    
    return 0;
}