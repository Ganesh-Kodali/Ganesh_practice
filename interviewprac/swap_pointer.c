#include<stdio.h>
void swap(int *a,int *b){

int temp;
temp= *a;
*a=*b;
*b=temp;
}
int main()
{
int x,y;
printf("enter the values of x,y\n");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("the values of x,y after swaping are %d ,%d\n",x,y);
}
