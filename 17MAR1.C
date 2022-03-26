#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len;
    char a[100], b[100];
    b[0] = '\0';

    printf("enter str:");
    gets(a);
    for (len = 0; a[len] != '\0'; len++)
        ;
    len = strlen(a);
    printf("%d", len);
    i = 0;
    j = 0;
    while (i < len / 2)
    {
        b[i++] = a[j++];
        j++;
    }
    b[len] = '\0';
    printf("string %s", b);
}