#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Running ls using execl...\n");
    execl("/bin/ls", "ls",  NULL);
     //  execl("/bin/ls", "ls",  NULL);

    printf("execl failed");
    return 1;
}

