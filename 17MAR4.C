#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0, k = 0;

    printf("enter str1:");
    gets(str);
    
    for (i = 0; str[i]!=0; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            j++;
        }
              if (str[i] >= 'a' && str[i] <= 'z')
        {
            k++;
        }
    }
    printf("\nupper case:%d", j);
    printf("\nlow case:%d", k);
}