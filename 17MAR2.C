#include <stdio.h>
int main()
{
    int i, j, k;
    int str[3];
    printf("Enter the first number : ");
    scanf("%d", &str[0]);
    printf("Enter the second number : ");
    scanf("%d", &str[1]);
    printf("Enter the third number : ");
    scanf("%d", &str[2]);
 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (i != j && j != k && k != i)
                {
               
                    printf("[%d %d %d]\n", str[i], str[j], str[k]);
                }
            }
        }
    }
}