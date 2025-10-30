#include<stdio.h>

void DisplayEven(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue=0;

    printf("Enter Range:");
    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}