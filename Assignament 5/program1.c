#include<stdio.h>

void CheckEvenOdd(int iNo)
{
        if((iNo%2)==0)
        {
            printf("It is Even Number");
        }
        else
        {
            printf("It is Odd Number");
        }

}

int main()
{
    int iValue=0;
    
    printf("Enter The Number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}