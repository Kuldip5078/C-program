#include<stdio.h>
int main()
{
    int a[100],i,sum;
    for(i=0;i<=5;i++)
    {
        printf("enter number:a[%d]",i);
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<=5;i++)
    {
        sum+=a[i];
    }
    printf("total:%d",sum);
    return 0;

}