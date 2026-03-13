#include<fcntl.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
int fd;

char buffer[50];

fd=open("myfifo",O_RDONLY);

read(fd,buffer,sizeof(buffer));

printf("reading from receiver : %s",buffer);

close(fd);
}
