#include <stdio.h>
int main()
{
    int n, loop;
    int Perfect(int);

    printf("Enter an integer number: ");
    scanf("%d", &n);

    Perfect(n);
}
int Perfect(int n)
{
    int loop, a = 0;

    for (loop = 1; loop < n; loop++)
    {
        if (n % loop == 0)
        {
            a = loop+a;
        }
    }
    if (a == n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
}