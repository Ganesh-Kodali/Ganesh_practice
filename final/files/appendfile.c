#include<stdio.h>

int main()
{
        FILE *fp;

        fp=fopen("gar.txt","a");

	fprintf(fp,"this is appended data\n");


        fclose(fp);
}

