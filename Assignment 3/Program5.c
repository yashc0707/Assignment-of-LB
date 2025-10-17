#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkVowel(char CValue)
{
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u'||CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Charchter:");
    scanf("%c",&cValue);

    bRet=chkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }


    return 0;
}
