#include<stdio.h>

int main()
{
printf("enter no of rows\n");

int n;

scanf("%d",&n);

for(int i=n;i>0;i--){
	for(int k=0;k<n-i;k++){
		printf(" ");}
	for(int j=1;j<=i;j++){
		printf("* ");}
printf("\n");
}}
