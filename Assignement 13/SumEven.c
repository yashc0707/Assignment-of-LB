#include<stdio.h>

void SumEven(int iNo)
{
    int iSum=0;
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iSum=iSum+iCnt;
        }
    }
    printf("%d",iSum);

}
int main()
{
    int iValue=0;

    printf("Enter Range:");
    scanf("%d",&iValue);

    SumEven(iValue);

    return 0;
}