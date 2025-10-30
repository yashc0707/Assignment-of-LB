#include<stdio.h>

void SumFactors(int iNo)
{
    int iSum=0;
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
            iSum=iSum+iCnt;
        }
    }
      printf("%d\t",iSum);
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    SumFactors(iValue);

    return 0;
}