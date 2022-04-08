#include<stdio.h>
int minarry(int arr[],int size)
{
    int min=arr[0];
    int i=0;
    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int i=0,min=0;
    int number[]={4,5,7,3,8,9};

    min=minarry(number,6);

    printf("minumum number is %d ",min);
    return 0;
}
