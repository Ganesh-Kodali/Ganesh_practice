#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
int fd;

char msg[]="hello from writer";

fd=open("myfifo",O_WRONLY);

write(fd,msg,strlen(msg)+1);

close(fd);
}
