#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j, len = 0;

    printf("\n Please Enter any Text:");
    gets(str1);

    j = 0;
    while (str1[len] != '\0')
    {
        len++;
    }

    j = len - 1;
    for (i = 0; i <= len; i++)
    {
        str2[i] = str1[j];
        j--;
    }

    printf("\nAnd the Result  :%s", str2);

    // compar


    i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    if (str1[i] > str2[i] || str1[i] < str2[i])
    {
        printf("\nnot palindrom");
    }
    else
    {
        printf("\n pelindrom");
    }

    return 0;
}
