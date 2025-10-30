#include<stdio.h>

double AreaOfCircle(float fRadius)
{
    
    double PI=3.14;

    return PI*fRadius*fRadius;
}
int main()
{
    float fValue=0.0;   
    double dRet=0.0;

    printf("Enter the Radius:");
    scanf("%f",&fValue);

    dRet=AreaOfCircle(fValue);
    printf("Area of Circle is:%lf\n",dRet);

    return 0;
}