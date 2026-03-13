#include<stdio.h>
#include<unistd.h>

int main()
{
char *arg[]={"ls",NULL};

printf("executing using execv\n");

execv("/bin/ls",arg);

printf("execv failed\n");
}
