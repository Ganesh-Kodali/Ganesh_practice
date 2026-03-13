#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define PORT 8080
#define SA struct sockaddr
#define MAX 1024

// Function to send file to client
void send_file(FILE *fp, int connfd)
{
    char data[MAX] = {0};

    while (fgets(data, MAX, fp) != NULL)
    {
        if (write(connfd, data, sizeof(data)) == -1)
        {
            perror("Error in sending file.");
            exit(1);
        }
        bzero(data, MAX);
    }
    printf("File sent successfully.\n");
}

int main()
{
    int sockfd, connfd, len;
    struct sockaddr_in servaddr, cli;
    char filename[100];
    FILE *fp;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1)
    {
        printf("Socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(PORT);

    if ((bind(sockfd, (SA *)&servaddr, sizeof(servaddr))) != 0)
    {
        printf("Socket bind failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully binded..\n");

    if ((listen(sockfd, 5)) != 0)
    {
        printf("Listen failed...\n");
        exit(0);
    }
    else
        printf("Server listening..\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (SA *)&cli, &len);
    if (connfd < 0)
    {
        printf("Server accept failed...\n");
        exit(0);
    }
    else
        printf("Server accepted the client...\n");

    // Ask user for file name to send
    printf("Enter filename to send: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("File not found");
        exit(1);
    }

    send_file(fp, connfd);
    fclose(fp);

    close(sockfd);
    printf("Server closed.\n");

    return 0;
}
