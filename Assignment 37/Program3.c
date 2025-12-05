#include<stdio.h>
#include<stdbool.h>

int Indexchar(char str[],char ch)
{

    for(int iCnt=0;str[iCnt] != '\0';iCnt++)
    {
        if(str[iCnt]==ch)
        {
            return iCnt;
        }
    }
    return -1;
    
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

    iRet=Indexchar(Arr,cValue);

    printf("Index is:%d\n",iRet);


    return 0;
}