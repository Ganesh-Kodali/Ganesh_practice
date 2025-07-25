#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        printf("Parent process: PID=%d, Child PID=%d\n", getpid());
	    sleep(30); 
    } else {
        exit(0);
    }

    return 0;
}

