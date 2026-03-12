#include<stdio.h>

int main()
{
    FILE *fp = fopen("data.txt","a");

    fprintf(fp,"New Data Added\n");

    fclose(fp);
}
