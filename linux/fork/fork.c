#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{

pid_t p = fork();

while(1){

printf("hello world , process_idi(pid) = %d\n",getpid());
}
return 0;
}
