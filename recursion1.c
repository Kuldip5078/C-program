#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("enter a position integer:");
    scanf("%d",&n);
    printf("facoriyal at %d=%d",n,fact(n));
    return 0;
}
long int fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else   
    return 1;
}