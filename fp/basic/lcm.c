#include<stdio.h>

int main()
{
printf("enter the 2 numbers\n");
int a,b;
scanf("%d %d",&a,&b);
int max;
max=a>b?a:b;

while(1)
{
	if(max%a==0 && max%b==0)
	{
		printf("the lcm of 2 numbers is %d\n",max);
		break;
	}
	++max;
	}
}
