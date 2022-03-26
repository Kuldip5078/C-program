// //    //  na.....na  //

// #include <stdio.h>
// int main()
// {
//     void par();
//     greater();
// }
// void greater()
// {
//     int a, b;
//     printf("\n enter two values...");
//     scanf("%d\n%d",&a,&b);

//     if (a < b)
//     {
//         printf("\n a is grater....%d", a);
//     }
//     else
//     {
//         printf("\n b is grater....%d", b);
//     }
// }s

// wa...na  //

#include<stdio.h>
int main()
{
    int a,b;
    void greater(int,int);
    printf("\n enter two values...");
    scanf("%d%d",&a,&b);

    greater(a,b);
}
void greater(int p,int q)
{
   if (p < q)
    {
        printf("\n a is grater....%d", p);
    }
    else
    {
        printf("\n b is grater....%d", q);
    }
}