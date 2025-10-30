#include<stdio.h>

double AreaOfRectangle(float fWidth,float fHeight)
{

    return fWidth*fHeight;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;   
    double dRet=0.0;

    printf("Enter the Width:");
    scanf("%f",&fValue1);

    printf("Enter the Height:");
    scanf("%f",&fValue2);

    dRet=AreaOfRectangle(fValue1,fValue2);
    printf("Area of Circle is:%lf\n",dRet);

    return 0;
}