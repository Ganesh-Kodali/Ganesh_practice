#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int empno;
    char empname[50];
    float empsalary;
    char empdept[30];
};

void addRecord();
void displayRecords();
void searchRecord();
void modifyRecord();
void deleteRecord();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\tEMPLOYEE DATA MENU\n");
        printf("\n\t1. ADD A RECORD");
        printf("\n\t2. DISPLAY RECORDS");
        printf("\n\t3. SEARCH FOR A RECORD (ID)");
        printf("\n\t4. MODIFY RECORD");
        printf("\n\t5. DELETE RECORD");
        printf("\n\t6. EXIT");
        printf("\n\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Enter numbers only.\n");
            while (getchar() != '\n');   // clear input buffer
            continue;
        }

        switch (choice)
        {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                modifyRecord();
                break;
            case 5:
                deleteRecord();
                break;
            case 6:
                printf("\nExiting program...\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
}

void addRecord()
{
    FILE *fp;
    struct Employee emp;

    fp = fopen("employee.dat", "ab");
    if (fp == NULL)
    {
        printf("\nError opening file!\n");
        return;
    }

    printf("\nEnter Employee Number: ");
    scanf("%d", &emp.empno);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.empname);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.empsalary);

    printf("Enter Employee Department: ");
    scanf(" %[^\n]", emp.empdept);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nRecord added successfully!\n");
}

void displayRecords()
{
    FILE *fp;
    struct Employee emp;
    int found = 0;

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n%-10s %-20s %-15s %-15s\n", "EMPNO", "EMPNAME", "EMPSALARY", "EMPDEPT");
    printf("---------------------------------------------------------------\n");

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("%-10d %-20s %-15.2f %-15s\n",
               emp.empno, emp.empname, emp.empsalary, emp.empdept);
        found = 1;
    }

    if (!found)
        printf("No records available.\n");

    fclose(fp);
}

void searchRecord()
{
    FILE *fp;
    struct Employee emp;
    int id, found = 0;

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("\nNo records found!\n");
        return;
    }

    printf("\nEnter Employee Number to search: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.empno == id)
        {
            printf("\nRecord Found:\n");
            printf("Employee Number    : %d\n", emp.empno);
            printf("Employee Name      : %s\n", emp.empname);
            printf("Employee Salary    : %.2f\n", emp.empsalary);
            printf("Employee Department: %s\n", emp.empdept);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nRecord not found!\n");

    fclose(fp);
}

void modifyRecord()
{
    FILE *fp;
    struct Employee emp;
    int id, found = 0;

    fp = fopen("employee.dat", "rb+");   // read + write binary
    if (fp == NULL)
    {
        printf("\nNo records found!\n");
        return;
    }

    printf("\nEnter Employee Number to modify: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.empno == id)
        {
            printf("\nRecord Found! Enter new details:\n");

            printf("Enter New Employee Name: ");
            scanf(" %[^\n]", emp.empname);

            printf("Enter New Employee Salary: ");
            scanf("%f", &emp.empsalary);

            printf("Enter New Employee Department: ");
            scanf(" %[^\n]", emp.empdept);

            // move file pointer back by one record
            fseek(fp, -sizeof(emp), SEEK_CUR);

            // overwrite the same record
            fwrite(&emp, sizeof(emp), 1, fp);

            found = 1;
            printf("\nRecord modified successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nRecord not found!\n");

    fclose(fp);
}

void deleteRecord()
{
    FILE *fp, *temp;
    struct Employee emp;
    int id, found = 0;

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("\nNo records found!\n");
        return;
    }

    temp = fopen("temp.dat", "wb");
    if (temp == NULL)
    {
        printf("\nError creating temporary file!\n");
        fclose(fp);
        return;
    }

    printf("\nEnter Employee Number to delete: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.empno == id)
        {
            found = 1;   // skip this record
        }
        else
        {
            fwrite(&emp, sizeof(emp), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("employee.dat");
    rename("temp.dat", "employee.dat");

    if (found)
        printf("\nRecord deleted successfully!\n");
    else
        printf("\nRecord not found!\n");
}
