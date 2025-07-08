#include<stdio.h>

int main()
{
char str[100];

printf("enter the string\n");
fgets(str,sizeof(str),stdin);

int i,count=0;

while(str[i]!='\0')
{
i++;
count++;
}
printf("length of the string is %d",count);
}

