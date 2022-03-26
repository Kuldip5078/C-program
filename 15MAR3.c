#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter string1");
    gets(str1);

    printf("enter string2");
    gets(str2);

    //strcpy(str2,str1);
   // strcat(str1,str2);

    printf("|\n strcmp: %d",strcmp(str1,str2));
    printf("\n strcpmpi :%d",strcmpi(str1,str2));


}