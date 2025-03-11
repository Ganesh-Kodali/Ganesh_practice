#include<stdio.h>
int main()
{
	int i;
	int max=0;
int a[]={1,2,3,4,5};
for(i=0;i<5;i++)
{
if (a[i]>max){
	max=a[i];
}

}

printf("max of array is %d",max);
}
