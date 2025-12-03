#include<stdio.h>

int main()
{
char src[100],dest[100];

int i=0;

fgets(src,sizeof(src),stdin);

for(i=0;src[i]!='\0';i++)
	dest[i]=src[i];

dest[i]='\0';

printf("the string after copying is %s",dest);
}
