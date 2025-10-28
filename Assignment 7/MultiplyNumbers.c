#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    for(int iCnt=1;iCnt<=5;iCnt++)
    {
        int iMul=0;
        iMul=iNo*iCnt;

        printf("%d\t",iMul);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    MultiplyDisplay(iValue);
    return 0;
}