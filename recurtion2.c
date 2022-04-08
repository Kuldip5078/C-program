// #include<stdio.h>
// void rec(int n)
// {

//     printf("windin phase:level=%d \n:",n);
//     if(n<3)
//     {
//         rec(n+1);
//     }
//     printf("unwinding phase:level=%d \n",n);
// }
// int main()
// {
//     rec(1);
//     return 0;
// }

#include <stdio.h>
void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    printFibonacci(n - 2);
    return 0;
}
