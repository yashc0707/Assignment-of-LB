#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }

    for(int iCnt=2;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}