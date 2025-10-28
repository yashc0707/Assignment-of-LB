#include<stdio.h>

void CheckNumberType(int iNo)
{
    if(iNo>0)
    {
        printf("Number is Positive");
    }
    else if(iNo<0)
    {
        printf("Number is Negative");
    }
    else if(iNo==0)
    {
        printf("Number is Zero");
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number:");
    scanf("%d",&iValue);

    CheckNumberType(iValue);

    return 0;
}