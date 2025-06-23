#include<stdio.h>
int main()
{
int n;
printf("even or odd using bitwise\n");
printf("enter the number\n");
scanf("%d",&n);
if(n&1==1)
{
printf("the number is odd\n");

}
else
{
	printf("the number is even\n");
}
}
