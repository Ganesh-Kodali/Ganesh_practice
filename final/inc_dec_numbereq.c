#include<stdio.h>

int main()
{
int i,j,k,n;

printf("enter no fo rows\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(k=n;k>i;k--)
		printf(" ");
	for(j=1;j<=i;j++)
		printf("%d ",j );
	for(j=i;j>0;j--)
		printf("%d ",j);
	printf("\n");
}

}
