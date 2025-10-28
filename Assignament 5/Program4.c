#include<stdio.h>

int FindLargest(int iNo1,int iNo2,int iNo3)
{
    if(iNo1>=iNo2 && iNo1>=iNo3)
    {
        return iNo1;
    }

    else if(iNo2>=iNo1 && iNo2>=iNo3)
    {
        return iNo2;
    }

    else
    {
        return iNo3;
    }

}

int main()
{
    int iValue1,iValue2,iValue3,iRet=0;

    printf("Enter the 1st Number:");
    scanf("%d",&iValue1);

    
    printf("Enter the 2nd Number:");
    scanf("%d",&iValue2);

    
    printf("Enter the 3rd Number:");
    scanf("%d",&iValue3);

    iRet=FindLargest(iValue1,iValue2,iValue3);
    printf("Largest Number is:%d",iRet);

    return 0;
}