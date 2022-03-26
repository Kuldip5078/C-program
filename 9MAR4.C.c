#include<stdio.h> 
int main()
{
	
	int a[10],i,total=0,sum=0;
	for(i=0;i<10;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}

   for(i=0;i<10;i++)
   {
	   printf("\n%d[%d]",a[i],i);
	   if(i%2==0)
	   {
		   total+=a[i];
	   }
	   else
	   {
		   sum+=a[i];
	   }
   }
   printf("\nodd position: %d",total);
   printf("\n enen position: %d",sum);
   return 0;
}