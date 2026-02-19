#include<stdio.h>

struct student{

	int id;
	char name[50];

};

void readdata(struct student *ptr ,int n)
{
printf("reading the details of the students\n");

for(int i=0;i<n;i++)
{
scanf("%d %s",&ptr[i].id,ptr[i].name);
}
}

void printdata(struct student *ptr ,int n)
{
printf("printing  the details of the students\n");

for(int i=0;i<n;i++)
{
printf("id =%d,name= %s\n",ptr[i].id,ptr[i].name);
}
}

int main()
{
struct student s[5];

readdata(s,5);
printdata(s,5);
}
