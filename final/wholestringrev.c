#include<stdio.h>

#include<string.h>

void stringrev(int l, int r, char str[])
{
	char temp;
while(l<r)
{
temp=str[l];
str[l]=str[r];
str[r]=temp;
l++;
r--;
}}

int main()
{
char str[]="hi hello ganesh";

	int i=0;
int l,r;
l=0;
r=strlen(str)-1;
stringrev(l,r,str);
while(str[i]!='\0')
{
while(str[i]==' ')
	i++;
if(str[i]=='\0')
	break;

l=i;

while(str[i]!=' ' && str[i]!='\0')
	i++;
r=i-1;

stringrev(l,r,str);
}
printf("%s ",str);


}


