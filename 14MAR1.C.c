#include<stdio.h>
int main()
{
    char str[100],str1[100];
    int len=0,j,i,a=0,b=0;

    printf("Enter string:\n");
    gets(str);

    for(i=0;str[len]!='\0';len++); 
    
        j=len-1;
        for(i=0;i<=len;i++)
        {
            str1[i]=str[j];
            j--;
        }
        printf("%s",str1);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str1[i])
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (b != 0)
    {   
    }
    else
    {
        printf("\nPalandrom");
    }
}
  
