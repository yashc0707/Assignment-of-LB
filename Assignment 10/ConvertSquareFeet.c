#include<stdio.h>

double FhtoCs(float fSFeet)
{
    return fSFeet*0.0929;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter the SquareFeet:");
    scanf("%d",&iValue);

    dRet=FhtoCs(iValue);
    printf("Converted Meter is:%lf",dRet);

    return 0;
}