#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        printf("*\t");
        iNo--;
    }


}
int main()
{
    int iValue=0;

    printf("Enter Number of Stars:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}