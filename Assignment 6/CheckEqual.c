#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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

    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Enter the Number:");
    scanf("%d%d",&iValue1,&iValue2);

    bRet=ChkGreater(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Equals");
    }

    else
    {
        printf("Not Equals");
    }

    return 0;

}