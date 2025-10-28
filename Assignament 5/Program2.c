#include<stdio.h>

int FindMax(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }

    else
    {
        return iNo2;
    }
}
int main()
{
    int num1=0;
    int num2=0;
    int Result=0;

    printf("Enter the 1st Number:");
    scanf("%d",&num1);

    printf("Enter the 2nd Number:");
    scanf("%d",&num2);

    Result=FindMax(num1,num2);
    printf("%d",Result);

    return 0;
}