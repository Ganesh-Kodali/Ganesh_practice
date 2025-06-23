#include<stdio.h>
#include<string.h>
int main()
{
char str[100],r[100];
int i=0,j=0;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

while(str[i]!=0)
{
if(str[i]!=' ')
{
r[j++]=str[i];
}
i++;
}
r[j]='\0';
printf("%s",r);
}
