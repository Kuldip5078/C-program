#include <stdio.h>
int main()
{
    int i, j, len = 0, k = 0;
    char str[100], str1[100], temp[100];

    printf("enter str:");
    gets(str);

    while (str[len] != '\0')
    {
        len++;
    }

    printf("%d", len);

    j = 0;
    i = 0;

    i = len - 1;
    while (j <= len)
    {
        str1[j] = str[i];
        j++;
        i--;
    }
    printf("\n ans %s", str1);

    /*i = 0;
    j = 0;
    printf("\n");

    if (len % 2 != 0)
    {

        for (i = 0;k< len/2 ; k++)
        {
            // printf(" %c", str1[len - i]);
            temp[i++] = str[i];
            temp[i++] = str[j--];
            // printf(" %c", str1[len-j]);
            // printf(" %c", str[len - j]);
            j++;
        }
    }
    else
    {

        for (j = 1, i = len; i > j; j++)
        {
            // printf(" %c", str1[len - i]);
            temp[k++] = str[len - j];
            temp[k++] = str[len - i];
            // printf(" %c", str[len - i]);
            // printf(" %c", str[len - j]);
            i--;
        }
    }
    for (k = 0; k < len; k++)
    {
        printf("\n%c",temp);
    }*/
}