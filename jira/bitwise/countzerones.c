#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);

int count1=0,count2=0;

while(n>0)
{
count1++;
if(n&1)
	count2++;
n=n>>1;
}
printf("total no of ones  n zeros are\n ");
printf("ones : %d\n",count2);
printf("zeros: %d\n",count1-count2);
}
