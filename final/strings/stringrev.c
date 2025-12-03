#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char temp;
	printf("enter the string\n");

	fgets(str,sizeof(str),stdin);

	int l,r;

	l=0;

	r=strlen(str)-1;

	while(l<r)
	{
		temp=str[l];
		str[l]=str[r];
		str[r]=temp;
	l++;
	r--;
	
	}

	printf("string after reversing is %s\n",str);
}

