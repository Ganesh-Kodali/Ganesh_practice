#include<stdio.h>

int swap(int *a, int *b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
}
int main()
{

int a,b;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("numbers after swapping are %d ,%d",a,b);
}
