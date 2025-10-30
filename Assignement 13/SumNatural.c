#include<stdio.h>

void SumNatural(int iNo)
{
    int iSum=0;
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    printf("%d",iSum);

}
int main()
{
    int iValue=0;

    printf("Enter Range:");
    scanf("%d",&iValue);

    SumNatural(iValue);

    return 0;
}