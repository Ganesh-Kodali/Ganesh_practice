#include<stdio.h>
int main()
{
int a,i,j,count=0;
printf("enter the number\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{

	for(j=2;j<i;j++)
	{
	if(i%j==0)
	{	count++;
       break;
	}}
if(count==0&& i!=1)
{
printf("%d\n",i);

}
count=0;
}
}
























