#include<stdio.h>

int main()
{
int num1[]={1,8,9,19};
int num2[]={20,2,5,199};
int n=4;
int m=4;
int i=n-1;
int j=m-1;
int k=m+n-1;
int num3[k];
while (n>0 && m>0)
{
if (num1[n]>num2[m]){
	num3[k]=num1[n];
       n--;}
else if (num1[n]<num2[m]){
	num3[k]=num2[m];
	m--;}
}
for(i=0;i<k;i++)
{
printf("%d ",num3[i]);
}



}


