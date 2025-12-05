#include<stdio.h>

void RevStr(char *str,char *cpy)
{
    char *end=str;
    
    while(*end!='\0')
    {
       end++; 
    }
    end--;

    char temp='\0';
    while(end>=str)
    {
        *cpy=*end;
        cpy++;
        end--;
    }

    
}

int main()
{
    char Arr[50]={'\0'};
    char Brr[50]={'\0'};
 
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    RevStr(Arr,Brr);

    printf("Reverse string:%s\n",Brr);


    return 0;
}