#include <stdio.h>
int main()
{
    int a, i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf(" skill");
        }

        if (i % 3 != 0 && i % 5 != 0)
        {
            printf(" %d", i);
        }
        if (i % 5 == 0)
        {
            printf(" code");
        }
    }
}