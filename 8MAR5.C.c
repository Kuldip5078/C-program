#include<stdio.h>
int main()
{
	char str[10];
	printf("ENTER STRING:");
	//scanf("%[^\n]",str);
	gets(str);
	printf("string is %s",str);
	return 0;
}