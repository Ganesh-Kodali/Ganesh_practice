#include<stdio.h>

int main()
{
int n;

printf("enter the number\n");
scanf("%d",&n);

for(int i=31;i>=0;i--)
	printf("%d",((n>>i)&1));
}
