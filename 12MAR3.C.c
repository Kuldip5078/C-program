#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j,len=1;

    printf("\n Please Enter any Text:");
    gets(str1);

  
    for(i=0;j< len/2;i++,j++)
    {
        j=len-1;
        if( str1[i] == str2[j] )
        {
            i=0;
        }
    }

    printf("\nAnd the Result  :%s", str2);

    if(j==1)
    {
        printf("not PALINDROME");
    }
    else
    {
        printf("PALINDROME");
    }
    return 0;
}
    

