#include <stdio.h>

int main()
{

    char str1[100], str2[100];
    int i, j, len = 1, k;

    printf("\n Please Enter any Text:");
    gets(str1);

    j = 0;
    while (str1[len] != '\0')
    {
        len++;
    }
    j=0;
    i=0;
    i=len-1;
    while(j<=len/2)
    {
        str2[j]=str1[i];     }
    //printf("%d", len);
    i = 0;
    j = len;
    while (k < len / 2)
    {
    
    str2[i++] = str1[i];
    str2[i++] = str1[j--];
    k++;
    
    printf("%s",str2[j]);
    }
    /*printf("\n%c",str1[len-5]);

    printf("%c",str1[len-1]);

    printf("%c",str1[len-4]);

    printf("%c",str1[len-2]);

    printf("%c",str1[len-3]);*/
}
