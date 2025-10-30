#include<stdio.h>

void RangeDisplay(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue=0;

    printf("Enter Range:");
    scanf("%d",&iValue);

    RangeDisplay(iValue);

    return 0;
}