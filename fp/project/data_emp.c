#include<stdio.h>

#include<stdlib.h>

struct employee
{
int id;
char name[20];
int salary;
char dept[20];
};

void addrecord();
void displayrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

int main()
{
int choice;

while(1){
	printf("------------- Employee data menu--------------------- \n");
	printf("\t 1.addrecord\n");
	printf("\t 2.display\n");
	printf("\t 3.modify\n");
	printf("\t 4.delete\n");
	printf("\t 5.search\n");
	printf("\t 6.exit\n");

	printf("\n \t\t enter your choice\n");
	
	if(scanf("%d",&choice)!=1)
	{
		printf("invalid input please select again\n");
		while(getchar()!='\n');
		continue;
	}
	switch (choice)
	{
		case 1:
			addrecord();
			break;
		case 2:
			displayrecord();
			break;
		case 3:
			modifyrecord();
			break;
		case 4:
			deleterecord();
			break;
		case 5:
			searchrecord();
			break;
		case 6:
			printf("-----------exiting the program-------\n");
			return 0;
		default:
			printf("invalid please try again\n");

}
}

return 0;
}

void addrecord(){
	FILE *fp;
	struct employee emp;

	fp=fopen("Ganesh.dat","w");

	printf("enter employee id\n");
	scanf("%d",&emp.id);

	printf("enter the employee name\n");
	scanf("%s",emp.name);

	printf("enter the employee salary\n");
	scanf("%d",&emp.salary);

	printf("enter the employee department\n");
	scanf("%s",emp.dept);

	fwrite(&emp,sizeof(emp),1,fp);
	fclose(fp);
}

void displayrecord(){
	FILE *fp;

	struct employee emp;

	fp=fopen("Ganesh.dat","rb");
int found=0;
	printf("\n %-20s %-20s %-20s %-20s\n","Employee Id","Employee Name","Employee Salary","Employee dept");

	printf("------------------------------------------------------------------------------------------\n");

	while((fread(&emp,sizeof(emp),1,fp))==1){
			printf("\n %-20d %-20s %-20d %-20s\n",emp.id,emp.name,emp.salary,emp.dept);
			found=1;
	}

if(found!=1)
printf("no record found\n");

}
void modifyrecord(){
	printf("this is function to modify record\n");
}
void deleterecord(){
	printf("this is function to delete record\n");
}
void searchrecord(){
	printf("this is function to search record\n");
}

