#include<stdio.h>

void Check(int iNo)
{
    if(iNo==0)
    {
        printf("Zero");
    }
    if(iNo==1)
    {
        printf("One");
    }
    if(iNo==2)
    {
        printf("Two");
    }
    if(iNo==3)
    {
        printf("Three");
    }
    if(iNo==4)
    {
        printf("Four");
    }
    if(iNo==5)
    {
        printf("Five");
    }
    if(iNo==6)
    {
        printf("Six");
    }
    if(iNo==7)
    {
        printf("Seven");
    }
    if(iNo==8)
    {
        printf("Eight");
    }
    if(iNo==9)
    {
        printf("Nine");
    }
    if(iNo==10)
    {
        printf("Ten");
    }

    if(iNo>10)
    {
        printf("Invalid Number");

    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Check(iValue);

    return 0;
}