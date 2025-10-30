#include<stdio.h>

void RangeSum(int iNo1,int iNo2)
{
    int iSum=0;
    for(int iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    printf("%d\t",iSum);

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Range:");
    scanf("%d%d",&iValue1,&iValue2);

    RangeSum(iValue1,iValue2);

    return 0;
}