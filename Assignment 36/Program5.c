#include<stdio.h>

void struprX(char str[])
{
    int iCnt=0;
    while((*str != '\0'))
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    printf("%d\n",iCnt);

    
    
}

int main()
{
    char Arr[50]={'\0'};
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    return 0;
}