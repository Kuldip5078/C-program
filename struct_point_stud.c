#include <stdio.h>
struct student
{
    int m1, m2, m3;
    float total, per;
};
int main()
{
    struct student s[10];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n \nEnter marks for studen:t%d", i + 1);
        printf("\n \nEnter marks m1: ");
        scanf("%d", &s[i].m1);
        printf("\nEnter marks m2: ");
        scanf("%d", &s[i].m2);
        printf("\nEnter marks m3: ");
        scanf("%d", &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].per = s[i].total / 3;

        printf("\n \nResult of student %d", i + 1);
        // printf("\n \nmarks 1:%d", s[i].m1);
        // printf("\n\n marks 2:%d", s[i].m2);
        // printf("\n \nmarks 3:%d", s[i].m3);
        printf("\n \ntotal %.2f", s[i].total);
        printf("\n \npercentage %.2f", s[i].per);
        printf("\n");
       
        if (s[i].m1 < 33 || s[i].m2 < 33 || s[i].m3 < 33)
        {
            printf("\n f");
        }
        else
        {
            if (s[i].per <= 100 && s[i].per > 75)
            {
                printf(" A");
            }
            else if (s[i].per <= 75 && s[i].per > 65)
            {
                printf(" B");
            }
            else if (s[i].per <= 65 && s[i].per > 55)
            {
                printf("C");
            }
            else if (s[i].per <= 55 && s[i].per > 40)
            {
                printf(" D");
            }
            else if (s[i].per <= 40 && s[i].per > 33)
            {
                printf(" E");
            }
            else
            {
                printf(" F");
            }
        }
    }
}