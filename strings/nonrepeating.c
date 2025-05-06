#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int count[256]={0};
int i,j;
printf("enter the string\n");
scanf("%s",str);
for (i=0;str[i]!='\0';i++)
{
count[(int)str[i]]++;
}
for (i=0;str[i]!='\0';i++)
{
if (count[(int)str[i]]==1)

{
printf("the first non repeating char is %c\n",str[i]);
break;
}
if(str[i]=='\0'){
printf("there are no non repeating characters\n");
}}
}
