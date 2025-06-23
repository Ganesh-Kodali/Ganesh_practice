#include<stdio.h>
int main()
{
FILE *fp =fopen("output1.txt","r");

char buffer[256];
if (fp==NULL)
{
printf("error opening file\n");
return 1;
}

while(fgets(buffer,sizeof(buffer),fp)!=NULL)
{
printf("%s",buffer);
}
}
