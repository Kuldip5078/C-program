#include<stdio.h>
int main()
{
    int a[10][10],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("enter a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\t %d",a[i][j]);
        }
    
    printf("\n");
    }
    

}