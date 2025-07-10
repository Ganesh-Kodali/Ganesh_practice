#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char str1[100];
int temp=0;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
int l=0,r;
int flag=0;
r=strlen(str)-1;


while(l<r)
{
	if(str[l]!=str[r])
	{	
		flag++;

	}
l++;
r--;
}
if(flag==0)
	printf("string is a palindrome\n");
	else 
	printf("string is not a palindrome\n");
}

