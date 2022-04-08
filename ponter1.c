// #include<stdio.h>
// int main()
// {
//     int n=10,m;
//     printf("\n value of n: %d",n);
//     printf("\n address of n: %u",&n);
//     //&(address of operetor)

// // }

// #include<stdio.h>
// int main()
// {
//     int n=10,*m;
//     printf("\n value of n: %d",n);
//     printf("\n address of n: %u",&n);//&(address of operetor)

//     m=&n;

//     printf("\n value of n using m:%d",*m);
//     printf("\n addrees of m:%u",&m);
//     printf("\n address of n using m:%u",m);
// }

#include<stdio.h>
int main()
{
    int *a=10,*b=15;
    printf("\n value of a: %d",a);
    printf("\n address of a: %u",&a);

    printf("\n value of a: %d",b);
   // printf("\n address of a: %u",&b);

    b=&a;

    printf("\n value of n using b:%d",*b);
  //  printf("\n addrees of b:%u",&b);
  //  printf("\n address of n using b:%u",b);

    a=&b;

    printf("\n value of n using a:%d",*a);
   // printf("\n address of a:%u",&a);
    //printf("\n address of n using a:%u",a);
}

