
#include<stdio.h>

int main()
{
    char str[100];
    int len=0, j=1,i;

    printf("Enter string:\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    for(i=0;i< len/2;i++)
    {
        if( str[i] != str[len-1-i] )
        {
            j=0;
        }
    }

    if(j==1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    return 0;
}