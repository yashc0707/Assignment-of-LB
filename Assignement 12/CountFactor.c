#include<stdio.h>

void CountsFactors(int iNo)
{
    int iCount=0;
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCount++;
        }
    }
      printf("%d\t",iCount);
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    CountsFactors(iValue);

    return 0;
}