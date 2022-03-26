     //  na.....na  //

// #include<stdio.h>
// int main()
// {
//     void dosum();
//     dosum();
// }
// void dosum()
// {
//     int a,b;
//     printf("\n enter two values...");
//     scanf("%d %d",&a,&b);
//     printf("\n sum:%d",a+b);
// }
// NAWR
// #include<stdio.h>
// int main()
// {
//     int sum;
//     int dosum();
//     sum = dosum();
//     printf("\n sum:%d",sum);
// }
// int dosum()
// {
//     int a,b;
//     printf("\n enter two values...");
//     scanf("%d %d",&a,&b);
//     return a+b;

// }
// WAWR
#include<stdio.h>
int main()
{
    int a,b;
    int dosum(int,int);
    printf("\n enter two values...");
    scanf("%d %d",&a,&b);    
    printf("\n sum:%d",dosum(a,b));
}
int dosum(int a,int b)
{    
    return a+b;
}









