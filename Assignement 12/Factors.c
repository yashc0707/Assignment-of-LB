#include<stdio.h>

void DisplayFactors(int iNo)
{
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}