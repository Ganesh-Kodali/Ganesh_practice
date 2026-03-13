#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pipe(fd);
    pid_t pid = fork();

    if (pid == 0) {
        close(fd[0]);
        char *msg = "Message from Child";
        write(fd[1], msg, strlen(msg)+1);
    } else {
        close(fd[1]);
        char msg[50];
        read(fd[0], msg, sizeof(msg));
        printf("Parent read: %s\n", msg);
    }
}

