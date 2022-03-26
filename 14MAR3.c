#include <stdio.h>
int main()
{
    int i, j, len = 0;
    char str[100], str1[100];

    printf("enter str:");
    gets(str);

    while (str[len] != '\0')
    {
        len++;
    }

    printf("%d", len);

    //  j = 0;
    //  i = 0;

    //  i = len - 1;
    //  while (j <= len)
    //  {
    //      str1[j] = str[i];
    //      j++;
    //      i--;
    //  }
    // printf("\n ans %s", str1);

    i = 0;
    j = 1;
    printf("\n");
     for (j = 12
     , i = len; j <=i; i--)
        {
            // printf(" %c", str1[len - i]);
            printf(" %c", str[len - i]);
            printf(" %c", str[len - j]);
            j++;

        }
    
    
    
}