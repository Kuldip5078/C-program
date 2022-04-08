#include <stdio.h>
void main()
{

    int a, b, *x, *y, c;

    printf("\n Enter the value of x and y");
    scanf("%d%d", &a, &b);

    printf("Before Swapping\nx = %d\n y = %d\n", a, b);

    x = &a;
    y = &b;

    c = *y;
    *y = *x;
    *x = c;

    printf("After Swapping\nx = %d\n y = %d\n", a, b);
}




