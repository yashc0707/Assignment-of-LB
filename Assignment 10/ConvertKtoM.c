#include<stdio.h>

int KilometerToMeter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Kilometer:");
    scanf("%d",&iValue);

    iRet=KilometerToMeter(iValue);
    printf("Converted Meter Value is:%d",iRet);

    return 0;
}