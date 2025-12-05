#include<stdio.h>

void RemoveSpace(char *src,char *dest)
{
    while(*src!= '\0')
    {
       if(*src !=' ')
       {
            *dest=*src;
            dest++;
       }
       src++;
    }
    
}

int main()
{
    char Arr[50]={'\0'};
    char Brr[50]={'\0'};
 
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    RemoveSpace(Arr,Brr);

    printf("updated string:%s\n",Brr);


    return 0;
}