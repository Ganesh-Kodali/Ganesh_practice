#include<stdio.h>

int main()
{
char str[100];
printf("enter the string\n");
fgets(str,sizeof(str),stdin);
int i=0;
char key='l';

while(str[i]!='\0')
{
if(str[i]==key)
	str[i]='a';
i++;
}
printf("%s",str);
}
