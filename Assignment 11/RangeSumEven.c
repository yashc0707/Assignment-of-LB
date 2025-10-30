#include<stdio.h>

void RangeSumEven(int iNo1,int iNo2)
{
    int iSum=0;
    for(int iCnt=iNo1;iCnt<=iNo2;iCnt++)
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
    int iValue1=0,iValue2=0;

    printf("Enter Range:");
    scanf("%d%d",&iValue1,&iValue2);

    RangeSumEven(iValue1,iValue2);

    return 0;
}