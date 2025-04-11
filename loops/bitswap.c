#include<stdio.h>

int main(){
	int n;
n=26;
if(((n>>2)&1)!=((n>>4)&1))
{
n=n^((1<<2)|(1<<4));

}

printf("%d",n);
}
