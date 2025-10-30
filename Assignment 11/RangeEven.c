#include<stdio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
    for(int iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
       if(iCnt%2==0)
       {
         printf("%d\t",iCnt);
       }
    }

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Range:");
    scanf("%d%d",&iValue1,&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}