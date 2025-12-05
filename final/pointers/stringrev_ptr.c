#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";

	char *p=str;

	char temp;

	int l=0;

	int r=strlen(str)-1;

	while(l<r)
	{
	temp=*(p+l);

	*(p+l)=*(p+r);

	*(p+r)=temp;
	l++;
	r--;
}

printf("%s\n",str);
}
