#include <stdio.h>
int main()
{
    int i = 'a',j;
    n:
    if (i <='e')
    {
        j ='a';
    j:
        if (j <= i)
        {
            printf("%c", i);
            j++;
            goto j;
        }
        printf("\n");
        i++;
        goto n;
    }
}




