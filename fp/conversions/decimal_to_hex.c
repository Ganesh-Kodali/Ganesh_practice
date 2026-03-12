#include<stdio.h>

int main()
{
int n;

printf("enter the number\n");
scanf("%d",&n);

int r,temp;
temp=n;

while(temp>0)
{
r=temp&0xF;
temp=temp>>4;
if(r<10)
	printf("%d",r);
else
	printf("%c",r-10+'A');
}

}
