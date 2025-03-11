#include<stdio.h>
int main()
{
	int i, num;
	printf("enter the range of prime numbers 1 to ");
	scanf("%d",&num);
	printf ("2\t3\t5\t7\t");
for (i=1;i<num;i++)
{
if ((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i%7!=0))
{

	printf("%d\t",i);
}
}
}
