#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp-32)*(5.0/9.0);
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter the Fahrenheit:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Converted Celsius is:%lf",dRet);

    return 0;
}