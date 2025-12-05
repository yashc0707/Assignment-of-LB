#include<stdio.h>
#include<stdbool.h>

bool charCheck(char str[],char ch)
{
    while((*str != '\0'))
    {
        if(*str==ch)
        {
            return true;
        }
        str++;
    }
    return false;
    
}

int main()
{
    char Arr[50]={'\0'};
    char cValue='\0';
    bool bRet=false;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character:\n");
    scanf(" %c",&cValue);

    bRet=charCheck(Arr,cValue);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}