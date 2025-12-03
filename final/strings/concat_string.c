#include<stdio.h>

int main()
{
char src[100],dest[100];

int i=0,j=0;

printf("enter the first string\n");
fgets(src,sizeof(src),stdin);

printf("enter the 2nd string\n");
fgets(dest,sizeof(dest),stdin);

while(dest[i]!='\0')
	i++;

for(j=0;src[i]!='\0';j++)
{
	dest[j]=src[i];
	i++;
}
dest[i]='\0';

printf("the string after copying is %s",dest);
}

