#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],len;
    printf("enter string:");
    gets(str1);
    len=strlen(str1);
    printf("\n string length :%d",len);

    printf("\n reverse %s",strrev(str1));

    printf("\n upper %s",strupr(str1));

    printf("\n lowre %s",strlwr(str1));

     printf("\n str %s",str1);


}