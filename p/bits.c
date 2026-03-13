#include<stdio.h>

int main()
{
	int n;
scanf("%d",&n);
	int nn=n;
n=n|(1<<2);

printf("number before setting %d\n",nn);
printf("number after setting %d\n",n);
}
