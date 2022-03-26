#include <stdio.h>
int main() 
{
  int i;
  char str1[100],str2[100];
  printf("\n enter str:");
  scanf("%s",str1);
  printf("\n enter str:");
  scanf("%s",str2);
  
  for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++)
  {
  if(str1[i]==str2[i])
  {
  printf("\nsame");
  }
  else
  {
  printf("\nnot same");
  }
  }
    return 0;
} 