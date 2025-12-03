#include<stdio.h>

int main()
{
char str[1000];
int count=0;
printf("enter the string\n");

fgets(str,sizeof(str),stdin);
int i=0;
while(str[i]==' ')
	i++;
for(int i=0;str[i]!='\0';i++)
{
if(str[i]==' ' && str[i-1]==' ' )
count++;
}

printf("total no of words = %d\n",count+1);
}

