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

      j = 0;
      i = 0;

     i = len - 1;
     while (j <= len/2)
    {
      
    for(i=0;i<len/2;i++);
    {
        printf("%s",str);
    }
          str1[j] = str[i];
          j++;
          i--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
      }
    printf("\n ans %s", str1);

   















   /* i = 0;
    j = 0;
    printf("\n");

    if (len % 2 != 0)
    {

        for (j = 1, i = len+1; j < i; i--)
        {
            // printf(" %c", str1[len - i]);
            printf(" %c", str[len - i]);
            printf(" %c", str[len - j]);
            j++;
        }
    }
    else
    {

        for (j = 1, i = len; j<len / 2 + 2, i> len / 2; j++)
        {
            // printf(" %c", str1[len - i]);

            printf(" %c", str[len - i]);
            printf(" %c", str[len - j]);
            i--;
        }
    }*/
}