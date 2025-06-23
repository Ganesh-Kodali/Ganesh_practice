#include<stdio.h>

#include<stdint.h>

#include<math.h>

int main(){

int n, last, cnt=0;

printf("enter the number: ");

scanf("%d",&n);

int temp=n;

last=n%10;

int a;
a=n/10;

while(n>10)

{

n/=10;
cnt++;

}
int nn;

nn= (((a*10)+n)-n*(pow(10,cnt)))+(last*pow(10,cnt));

printf("%d",nn);
}

