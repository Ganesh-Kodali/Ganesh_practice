#include<stdio.h>

int main()
{
int a1[]={1,2,3,4,6,2,9};

int a2[]={6,1,2,3,4,};

int result[100];

int i,j,k=0,x,flag;

for(i=0;i<sizeof(a1)/4;i++)
{
for(j=0;j<sizeof(a2)/4;j++)
{
if(a1[i]==a2[j])
{
flag=0;
for(x=0;x<k;x++)
{
if(result[x]==a1[i])
	flag++;
}

if(flag==0)
{	result[k]=a1[i];
	k++;
}
	}}}
for(i=0;i<k;i++)
printf("%d ",result[i]);
}
