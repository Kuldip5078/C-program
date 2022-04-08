#include<stdio.h>
int main()
{
    int a[5]={12,43,65,76,97};
    int *p=a;
    int i;
    printf("printinh array elements...\n");

    for(i=0;i<5;i++)
    {
        printf("%d",*(p+i));
        //printf("\n %d",a[i],&a[i]);
    }
}


