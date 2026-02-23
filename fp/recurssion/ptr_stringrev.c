#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello";
char temp,*start ,*end;

start=str;

end=str+strlen(str)-1;

while(start<end)
{
	temp=*start;
	*start=*end;
	*end=temp;

start++;
end--;
}

printf("string after reversing is %s",str);
}

