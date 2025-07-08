#include<stdio.h>

int main()
{
char str[100];
char str1[100];
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

int i=0,count=0;

while(str[i]!='\0')
{
str1[i]=str[i];
i++;

}
str1[i]='\0';
printf("new  string is %s",str1);
}

