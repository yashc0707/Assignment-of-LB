#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        return;
    }

    for(i=1;i<=(iNo/2);i++)
    {
        if(i%2==0 && iNo%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Numbers:");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}