#include<stdio.h>

int main()
{
int n;
int start,end;
printf("enter the range\n");
printf("starting digit\n");
scanf("%d",&start);
printf("enter the last digit\n");
scanf("%d",&end);
for(int j=start;j<end;j++)
{
int flag=1;
for(int i=2;i<j;i++)
{
if(j%i==0)
{       flag=0;
break;
}
}
if(flag==1)
printf("%d ",j);
	}
}

