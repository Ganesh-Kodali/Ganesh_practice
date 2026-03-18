#include<stdio.h>

int main()
{
FILE *fp;

int num=23,readnum;

fp=fopen("basic.dat","wb+");

fprintf(fp,"%d",num);
rewind(fp);
fscanf(fp,"%d",&readnum);
fclose(fp);

printf("NUmber= %d\n",readnum);

}

