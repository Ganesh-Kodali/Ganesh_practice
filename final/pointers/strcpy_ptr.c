#include<stdio.h>

void mystrcpy(char *src, char *dest)
{
	while(*src)
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

int main()
{
char str[]="hello ganesh";

char dest[100];

mystrcpy(str,dest);

printf("after copying %s\n",dest);
}
