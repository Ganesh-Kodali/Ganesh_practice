#include<stdio.h>

int main()
{
int n=13;

int count=0,k;
scanf("%d",&k);
int nn=n;
int m=n;
while(m>0)
{
count++;
m=m>>1;
}

n=((n<<k)|(n>>(count-k)))&((1<<count)-1);

nn=((nn>>k)|(nn<<(count-k)))&((1<<count)-1);

printf("left shift %d\n",n);

printf("right shift %d\n",nn);
}
