#include<stdio.h>

struct student{

        int id;
        char name[50];

};

void readdata(struct student s[] ,int n)
{
printf("reading the details of the students\n");

for(int i=0;i<n;i++)
{
scanf("%d %s",&s[i].id,s[i].name);
}
}

void printdata(struct student s[] ,int n)
{
printf("printing  the details of the students\n");

for(int i=0;i<n;i++)
{
printf("id =%d,name= %s\n",s[i].id,s[i].name);
}
}

int main()
{
struct student s[5];

readdata(s,5);
printdata(s,5);
}

