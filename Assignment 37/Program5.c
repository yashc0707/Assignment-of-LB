#include<stdio.h>

void RevStr(char *str)
{
    char *start=str;
    char *end=str;
    
    while(*end!='\0')
    {
       end++; 
    }
    end--;

    char temp='\0';
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr[50]={'\0'};
 
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    RevStr(Arr);

    printf("Reverse string:%s\n",Arr);


    return 0;
}