#include<stdio.h>

int main()
{
    FILE *fp = fopen("data.txt","w");

    fprintf(fp,"Hello Ganesh\n");
    fprintf(fp,"Embedded Systems\n");

    fclose(fp);
}
