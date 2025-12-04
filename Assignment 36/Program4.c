#include<stdio.h>

void struprX(char str[])
{
    int iCnt=0;
    while((*str != '\0'))
    {
        if((*str>='0') && (*str<='9'))
        {
            printf("%c\t",*str);
        }
        str++;
    }

    
    
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