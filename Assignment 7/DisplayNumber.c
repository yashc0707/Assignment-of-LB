#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}