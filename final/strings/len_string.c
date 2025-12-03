#include<stdio.h>

int main()
{
char str[1000];
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

int i=0;
while(str[i]!='\0')
	i++;
printf("length of the string is %d\n",i-1);
}
