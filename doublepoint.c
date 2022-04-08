#include<stdio.h>
int main()
{
    int *ptr;
    int n=10;
    int **douptr;
    ptr=&n;

    printf("\n address of ptr:%u",&ptr);
    printf("\n address of n using ptr:%u",ptr);

    printf("\n\n-----------double pointer-----------\n");
    douptr=&ptr;

    printf("\n value of n using douptr %d",**douptr);    // main valueu
    printf("\n address of ptr using douptr :%u",douptr); // pointer nu addresss
    printf("\n address of douptr :%u",&douptr);          //potanu address
    printf("\n address of n using douptr: %u",*douptr);  //  valueu nu address
}

// **              main valueus
// *               valueu nu address
// only pointer    pointer nu addresss
// &               potanu address