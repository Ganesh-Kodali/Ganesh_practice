#include<stdio.h>
#include<unistd.h>

int main()
{
char *arg[]={"ls",NULL};

printf("executing using execv\n");

execvp("ls",arg);

printf("execv failed\n");
}

