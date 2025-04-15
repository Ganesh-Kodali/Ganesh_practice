#include<stdio.h>
#include<string.h>
 
struct book{
int a;
float b;
double c;
char d;
};

union name{
int a;
float b;
double c;
char d;
};
int main()

{
struct book i;
union name n;

printf("%ld %ld",sizeof(i),sizeof(n));
}
