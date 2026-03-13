#include <stdio.h>
#include <unistd.h>

int main() {
    char *newenv[] = { "PATH=/bin", NULL }; // custom environment
    printf("Running ls using execle...\n");
    execle("/bin/ls", "ls", NULL);
    perror("execle failed");
    return 1;
}

