#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("* ");
        }
        else
        {
            printf("$ ");
        }
    }

}

int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}