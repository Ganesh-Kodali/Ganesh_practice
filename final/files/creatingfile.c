#include<stdio.h>

int main()
{
	FILE *fp;

	fp=fopen("gar.txt","w");

	fprintf(fp,"hello\n");
	fprintf(fp,"writing from outside\n");

	fclose(fp);
}
