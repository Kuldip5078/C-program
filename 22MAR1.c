#include <stdio.h>
int main() 
{
    int i, j, n, k = 0, a = 0, b = 0;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n - i; ++j)
        {
            printf("  ");
            ++a;
        }
        while (k!=2*i-1)
        {
            if (a <= n - 1)
            {
                printf("%d ", i + k);
                ++a;
            }
            else
            {
                ++b;
                printf("%d ", (i + k - 2 * b));
            }
            ++k;
        }
        b = a= k = 0;
        printf("\n");
    }
    return 0;
}
