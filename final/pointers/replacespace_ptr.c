#include<stdio.h>

int main()
{
char str[1000];

char *p=str;
printf("enter the string\n");

fgets(str,sizeof(str),stdin);

while(*p)
{
if(*p==' ')
        *p='_';
p++;
}

printf("after removing spaces n replacing them\n %s\n",str);
}

