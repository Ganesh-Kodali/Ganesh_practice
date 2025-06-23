#include<stdio.h>
int main()
{
int n,leftshift,shift;
printf("enter the number\n");
scanf("%d",&n);
printf("number of bits to shift\n");
scanf("%d",&shift);
leftshift= (n<<shift);
printf("value after shifting %b\n",leftshift);
}
