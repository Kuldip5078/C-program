#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100], len;
    int i, j = 0;

    printf("enter str1:");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U')
        {
            j++;
        }
    }
    printf("%d", j);
}