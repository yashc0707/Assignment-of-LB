#include<stdio.h>
#include<stdbool.h>

float Percentage(int iNo1,int iNo2)
{
    if(iNo1==0) return 0.0;
   return (((float)iNo2/iNo1)*100);
}
int main()
{

    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("Enter Total Marks:");
    scanf("%d",&iValue1);

    printf("Enter Scored Marks:");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("Percentage is:%lf",fRet);
    return 0;

}