// ///////////////////////////// wa...na/////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {

//     char g;

//     void total();
//     void per();
//     total();
// }

// void total()
// {
//     int a, b, c, total, per;
//     printf(" enter the mark ....");
//     scanf("%d %d %d", &a, &b, &c);
//     total = a + b + c;
//     printf("total=%d", total);

//     per = total / 3;
//     printf(" \n per:%d", per);
//     if (per <= 100 && per > 75)
//     {
//         printf("A");
//     }
//     else if (per <= 75 && per > 65)
//     {
//         printf("B");
//     }
//     else if (per <= 65 && per > 55)
//     {
//         printf("C");
//     }
//     else if (per <= 55 && per > 40)
//     {
//         printf("D");
//     }
//     else if (per <= 40 && per > 33)

//     {
//         printf(": E");
//     }
//     else
//     {
//         printf(" : F");
//     }
// }

///////////////////////////// wa...na/////////////////////////////////////////////////////

// ..............No return   No Argument...............

// #include <stdio.h>
// int main()
// {

//     char g;

//     void total();
//     void per();
//     total();
// }

// void total()
// {
//     int a, b, c, total, per;
//     printf(" enter the mark ....");
//     scanf("%d %d %d", &a, &b, &c);
//     total = a + b + c;
//     printf("total=%d", total);

//     per = total / 3;
//     printf(" \n per:%d", per);
//     if (per <= 100 && per > 75)
//     {
//         printf("A");
//     }
//     else if (per <= 75 && per > 65)
//     {
//         printf("B");
//     }
//     else if (per <= 65 && per > 55)
//     {
//         printf("C");
//     }
//     else if (per <= 55 && per > 40)
//     {
//         printf("D");
//     }
//     else if (per <= 40 && per > 33)

//     {
//         printf("E");
//     }
//     else
//     {
//         printf("F");
//     }
// }

// ..............with return   No Argument...............done

#include <stdio.h>
int main()
{
    int p;
    int total();
    p = total();
    printf("\n %d", p);
}
int total()
{
    int a, b, c,total, per;
    printf(" enter the mark ....");
    scanf("%d %d %d", &a, &b, &c);
    void d(int);
    total = a + b + c;
    per = total / 3;
    d(per);
    return total;
}
void d(int per)
{

    printf(" \n per:%d", per);
    if (per <= 100 && per > 75)
    {
        printf(" A");
    }
    else if (per <= 75 && per > 65)
    {
        printf(" B");
    }
    else if (per <= 65 && per > 55)
    {
        printf("C");
    }
    else if (per <= 55 && per > 40)
    {
        printf(" D");
    }
    else if (per <= 40 && per > 33)

    {
        printf(" E");
    }
    else
    {
        printf(" F");
    }
}