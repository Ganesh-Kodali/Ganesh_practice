#include<stdio.h>

int main()
{
char str[]="hello";
int len=0;
char *p=str;
	
	while(*p!='\0')
	{p++;
	len++;
	}

	printf("length of the string is %d\n",len);
}
