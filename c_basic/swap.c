#include<stdio.h>
int main()

{

        int n,o,temp;
printf("enter the number\n");
scanf("%d%d",&n,&o);
        temp=n;
	n=o;
	o=temp;
printf(" numbers after swapping is %d \t %d\n",n,o);

}
