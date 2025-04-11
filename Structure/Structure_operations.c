#include<stdio.h>
#include<string.h>

struct student{

	char name[50];
	int age;
	float totalmarks;
};

int main()
{
struct student student1,student2;
printf("enter the name of student 1\n");
scanf("%s",student1.name);
printf("enter the age of studnet 1\n");
scanf("%d",&student1.age);
printf("enter the marks of student 1\n");
scanf("%f",&student1.totalmarks);

//student 2 details
printf("enter the name of student 2\n");
scanf("%s",student2.name);
printf("enter the age of studnet 2\n");
scanf("%d",&student2.age);
printf("enter the marks of student 2\n");
scanf("%f",&student2.totalmarks);

printf("%s\n%d\n%f\n",student1.name,student1.age,student1.totalmarks);
printf("%s\n%d\n%f\n",student2.name,student2.age,student2.totalmarks);

printf("the avg of total marks is %f\n",(student1.totalmarks+student2.totalmarks)/2.0);
}
