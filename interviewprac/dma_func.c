#include<stdio.h>
#include<stdlib.h>
int* createarray( int initialsize){
	if (initialsize<=0)
		return NULL;
	int* a=(int*)malloc(initialsize * sizeof(int));
	if (a==NULL)

		printf("memory allocation failed");
	return a;
}

int main()
{
int size;
int *a;
printf("enter the size of array\n");
scanf("%d",&size);
createarray(&size,a);
for(int i=0;i<size;i++){
	printf("%d",a[i]);
}}
