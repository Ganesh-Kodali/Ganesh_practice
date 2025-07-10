#include<stdio.h>
#include<string.h>

int main()
{
char str1[100];
char str2[100];

printf("enter the first string\n");
fgets(str1,sizeof(str1),stdin);

printf("enter the second string\n");
fgets(str2,sizeof(str2),stdin);
int i=0,flag=0;
while((str1[i]!=0) && (str2[i]!=0))
{
if(str1[i]!=str2[i])
	flag++;
i++;
}
if(flag==0)
	printf("strings are equal\n");
	else
	printf("string are not equal\n");
}
