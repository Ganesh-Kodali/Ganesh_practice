#include<stdio.h>
int main()
{
FILE *fp =fopen("output.txt","w");

if (fp==NULL)
{
printf("error opening file\n");
return 1;
}

fprintf(fp,"hello\n");
fprintf(fp,"this is a test\n");
fclose(fp);
printf("data successfully written to output\n");
}
