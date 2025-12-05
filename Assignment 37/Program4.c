#include<stdio.h>
#include<stdbool.h>

int LastIndexchar(char str[],char ch)
{
    int iCnt=0;
    int iLastIndex=-1;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]==ch)
        {
            iLastIndex=iCnt;
        }
        iCnt++;
    }
    return iLastIndex;
    
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

    iRet=LastIndexchar(Arr,cValue);

    printf("Index is:%d\n",iRet);


    return 0;
}