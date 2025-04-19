#include<stdio.h>
int main()
{
int n,p;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the bit pos to check the set bit\n");
scanf("%d",&p);
n=(n>>p)&1;
if(n==1)
	printf("the given bit pos is set\n");
else 
	printf("the given bit pos is not set\n");
}
