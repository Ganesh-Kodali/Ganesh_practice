#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
int fd[2];

char buffer[50];

pipe(fd);

if(fork()==0)
{
close(fd[1]);
read(fd[0],buffer,sizeof(buffer));
printf("reading from child:%s",buffer);
}
else
{
close(fd[0]);
write(fd[1],"hello from parent",18);
}
}

