#include <stdio.h>
int main()
{
    int a[10][10], b[10][10],sum[10][10], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\t\ta\t\t\tb\t\t\tsum");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", b[i][j]);
        }
        for (j = 0; j < 3; j++)
        {
             sum[i][j]=a[i][j]+b[i][j];
            printf("\t %d", sum[i][j]);
        }
        printf("\n");
    }
    
   
    
}
