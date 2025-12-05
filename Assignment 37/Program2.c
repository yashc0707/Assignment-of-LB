#include<stdio.h>
#include<stdbool.h>

int Countchar(char str[],char ch)
{
    while((*str != '\0'))
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[50]={'\0'};
    char cValue='\0';
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character:\n");
    scanf(" %c",&cValue);

    iRet=Countchar(Arr,cValue);

    printf("Count is:%d\n",iRet);


    return 0;
}