#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("newskill.txt","w+");
    fprintf(fp,"welcome to skill qode tha programing \n");
    fputs("you are entering to learn c langvage...\n",fp);
    fclose(fp);
}