#include<stdio.h>
int main()
{
int i,j,n,isp;
printf("till how many numbers u want to print prime numbers\n");
scanf("%d",&n);

for(i=2;i<n;i++){
	isp=1;
	for (j=2;j*j<=i;j++){
		if (i%j==0){
			isp=0;
			break;}
	}
if(isp)
	printf("%d ",i);
}
}
