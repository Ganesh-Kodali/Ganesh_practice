#include<stdio.h>

int isprime(int num)
{
for(int n=2;n<num/2;n++)
{
if(num%n==0)
	return 0;
}
return 1;
}

int main()
{
int n;
int num=2;
printf("enter no of rows\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
        for(int k=i;k<n;k++)
                printf(" ");

for(int j=1;j<=i;j++)
{
	while(isprime(num)!=1)
		num++;
printf("%d ",num);
num++;
}printf("\n");
}

for(int i=n-2;i>0;i--)
{
        for(int k=i;k<n;k++)
                printf(" ");

for(int j=1;j<=i;j++)
{
	while(isprime(num)!=1)
		num++;
printf("%d ",num);
num++;
}printf("\n");
}


}
