#include<stdio.h>

void strtoggleX(char *src,char *dest)
{
    while(*src!= '\0')
    {
       if(*src>='A' && *src<='Z')
       {
            *src=*src+32;
       }
       else if(*src>='a' && *src<='z')
       {
            *src=*src-32;
       }
       
       *dest=*src;
        dest++;
        src++;
    }
    
}

int main()
{
    char Arr[50]={'\0'};
    char Brr[50]={'\0'};
 
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr,Brr);

    printf("updated string:%s\n",Brr);


    return 0;
}