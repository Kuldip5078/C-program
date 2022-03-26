#include<stdio.h>
#include<string.h>
int main()
{
  char str[10],str2[100],len;
  int i,j;

  printf("enter str:");
  gets(str);

  len=strlen(str);
  printf("%d",len);
  strcpy(str2,str);
  strupr(str2);
  for(i=0;i<len;i++)
  {
    if(i%2==0)
    {
      printf("%c",str[i]);
    }
    else
    {
      printf("%c",str2[i]);
    }

  }
}