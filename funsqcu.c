#include <stdio.h>
int main()
{
    int a,b,c;
    
    void Square(int);
    void Cube(int);
    
    printf("enter the neumber.....:");
    scanf("%d",&a);
    Square(a);
    Cube(a);
}
void Square(a)
{
    int b;
    b=a*a;
   printf("square :%d",b);
}
void Cube(a)
{
   printf("Cube :%d",a*a*a);
}