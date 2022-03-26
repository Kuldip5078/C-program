#include <stdio.h>

int main()
{
   char str1[30], str2[30];
   int i;

   printf("\nEnter two strings]:");
   gets(str1);
   printf("\nEnter two strings]:");
   gets(str2);
   for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);

   if (str1[i] > str2[i] || str1[i] < str2[i])
     
      printf("strinfg is not same");

   else
     
      printf("string is same");

   return (0);
}   