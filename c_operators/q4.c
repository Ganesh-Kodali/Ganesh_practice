#include<stdio.h>
int main()
{
	short int count=0,i,num;
	printf("enter the number\n");
	scanf("%hd",&num);
	for(i=0;i<=16;i++)
	{
	if(((num>>i)&1==1))
			{
			count++;
			}
	}
printf("total number of set bits in the number %b is %d \n",num,count);

}
