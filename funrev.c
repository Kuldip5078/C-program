#include<stdio.h>
int main()
{
    int num;
    int reverse(int);
    printf("\nenter string:");  
    scanf("%d",&num);
    printf("rev :%d",reverse(num));
}       
int reverse(int n)
{  
    int rem,rev=0;
    while(n>0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    return rev;
}