#include<stdio.h>

int main()
{
char str[1000];

printf("enter the string\n");

fgets(str,sizeof(str),stdin);

for(int i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
	str[i]='_';
}

printf("after removing spaces n replacing them\n %s\n",str);
}
