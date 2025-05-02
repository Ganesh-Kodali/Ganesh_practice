#include<stdio.h>
#include<string.h>
int main()
{
char str[50],temp,i,j;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("%s\n",str);
}
