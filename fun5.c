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
//     if (a < b)
//     {
//         printf("\n a is grater....%d", a);
//     }
//     else
//     {
//         printf("\n b is grater....%d", b);
//     }
//     return;

// }
// WAWR


// #include<stdio.h>
// int main()
// {
//     int a,b;
//     int dosum(int,int);
//     printf("\n enter two values...");
//     scanf("%d %d",&a,&b);    
//     printf("\n sum:%d",dosum(a,b));
// }
// int dosum(int a,int b)
// {  
//     if (a < b)
//     {
//         printf("\n a is grater....%d", a);
//     }
//     else
//     {
//         printf("\n b is grater....%d", b);
//     }  
//     return a+b;
// }



//////////////////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int i, j;
    void call(int);
    void r(int i,int j);
    void t();
    for (i = 1; i <= 5; i++)
    {
        r(j,i);
        t();
    }
}

void r(int j,int i)
{
    for (j=1;j<=i;j++)
    {
           printf("%d", j);
    }
}
void t()
{
    printf("\n");
}

///////////////////////////////////////////////////////////