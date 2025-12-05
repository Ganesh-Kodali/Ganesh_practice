#include<stdio.h>

void strrev(int l,int r, char*str)
{
char temp;

while(l<r)
{
	temp=str[l];
	str[l]=str[r];
	str[r]=temp;
	l++;
	r--;
	
}
}

int main()
{
	int l,r,i=0;
char str[]="embedded linux is a great learning";


while(str[i]!='\0')
{
	
l=i;
while(str[i]!=' ' && str[i]!='\0')
	i++;
r=i-1;

strrev(l,r,str);
if(str[i]==' ')
	i++;
}
printf("string after reversing is %s\n",str);
}
