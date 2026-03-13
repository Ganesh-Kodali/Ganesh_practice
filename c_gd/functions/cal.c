#include<stdio.h>

int add(int , int);
void sub(int ,int);
void mul(int, int);
void ext();
int main()
{


	printf("this is the calculator program\n");
while(1){
	printf("enter your choice");

	int choice;
	scanf("%d",&choice);

	int a,b;
	printf("enter the 2 numbers\n");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
			printf("this is addition\n");
			int sum=add(a,b);
			printf("%d",sum);

			break;
			
		case 2:
			printf("this is sub\n");
			sub(a,b);

			break;

		case 3:
			printf("this is multiplication\n");
			mul(a,b);

			break;

		case 4:
			ext();
			return 0;
			break;

		default:

			printf("wrong entry\n");

				}

}}

int add(int a,int b)
{
return a+b;
}

void sub(int a, int b)
{
int sub=a-b;

printf("%d\n",sub);
}

void mul(int a, int b)
{
int multi=a*b;
printf("%d\n",multi);
}

void ext()
{
printf("exited successfully\n");
}
