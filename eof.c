#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    fp=fopen("newskill.txt","r");
    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s\t",buff);
    }
    fclose(fp);
}