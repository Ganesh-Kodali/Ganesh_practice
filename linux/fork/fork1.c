#include <stdio.h>
#include <unistd.h> 
#include <sys/types.h> 

int main() {
    pid_t child_pid;

    child_pid = fork();
while(1){
    if (child_pid == 0) {
        printf("Child process: PID=%d, Parent PID=%d\n", getpid(), getppid());
    } else {
        printf("Parent process: PID=%d, Child PID=%d\n", getpid(), child_pid);
    }
sleep(3);
}
}
