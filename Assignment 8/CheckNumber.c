#include<stdio.h>

void Check(int iNo)
{
    if(iNo<50)
    {
        printf("Smaller");
    }
    if(iNo>=50 && iNo<=100)
    {
        printf("Medium");
    }
    if(iNo>=100)
    {
        printf("Greater");
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