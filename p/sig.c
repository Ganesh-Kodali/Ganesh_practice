#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
    char name[100];

    /* Ignore Ctrl+C */
   signal(SIGINT, SIG_IGN);

    printf("Enter your name: ");
    fflush(stdout);

    scanf("%99s", name);

    printf("\nHello, %s\n", name);

    return 0;
}

