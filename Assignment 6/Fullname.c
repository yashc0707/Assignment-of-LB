#include<stdio.h>

int main()
{
    char Name[70];

    printf("Enter the Full Name:");
    scanf("%[^\n]",Name);

    printf("Your name is %s",Name);

    
    return 0;
}