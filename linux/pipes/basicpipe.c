#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    char msg[] = "Hello from parent!";
    char buffer[50];

    pipe(fd);        // Create pipe

    pid_t pid = fork();

    if (pid == 0) {
        // Child process - read data
        close(fd[1]);               // Close write end
        read(fd[0], buffer, sizeof(buffer));
        printf("Child read: %s\n", buffer);
        close(fd[0]);
    } else {
        // Parent process - write data
        close(fd[0]);               // Close read end
        write(fd[1], msg, strlen(msg) + 1);
        close(fd[1]);
    }

    return 0;
}

