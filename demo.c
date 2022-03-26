#include <stdio.h>
int main()
{
    char str[100];
    int len=0, i, j,k;

    printf("\nEnter Name :- ");
    scanf("%s", str);
     while (str[len] != '\0')
    {
        len++;
    }
        printf("%d", len);
    
    j = len / 2;
    if (len % 2 != 0)
    {
       j += 1;
    }
    k = len;
    for (i = 0; i < j; i++)
    {
        printf("%c", str[i]);
        if (j != len)
        {
            len--;
            printf("%c", str[len]);
        }
    }
}