#include<stdio.h>

int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);

int i=31;
int start=0;
while(i>=0)
{
if((n>>i)==1)
	start=1;
if(start)
	printf("%d",(n>>i)&1);
i--;
}

}
