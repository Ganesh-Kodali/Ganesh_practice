#include<stdio.h>

void swap(int *a, int *b)
{
	int t;
t=*a;
*a=*b;
*b=t;
}

int main()
{
printf("enter the numbers\n");
int a,b;
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("after swapping %d %d",a,b);
}
