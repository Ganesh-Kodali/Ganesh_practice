#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<string.h>

struct msgbuf{
long mtype;
char text[100];
}

int main()
{
int msgid;
struct msgbuf msg;
msgid=msgget(6,0666|IPC_CREATE);

msgrc(msgid,&msg,sizeof(msg.txt),1,0);

printf("message received %s  \n",msg.txt);
}
