#include<stdio.h>

int main()
{
FILE *fp;

int num=23,readnum;

fp=fopen("basic.dat","wb+");

fwrite(&num,sizeof(int),1,fp);

rewind(fp);
fread(&readnum,sizeof(int),1,fp);

fclose(fp);

printf("NUmber= %d\n",readnum);

}
