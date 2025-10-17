#include<stdio.h>

void CheckFactor(int iNo)
{
    if(iNo<=0)
    {
        return;
    }

    for(int iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
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

    CheckFactor(iValue);

    return 0;
}