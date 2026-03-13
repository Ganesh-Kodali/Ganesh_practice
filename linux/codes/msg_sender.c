#include<sys/msg.h>
#include<sys/ipc.h>
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

msg.mtype=1;

strcpy(msg.text,"hello from writer");

msgsnd(msgid,&msg,sizeof(msg),0);
printf("msg sent\n");
}
