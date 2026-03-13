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

void send_file(FILE *fp, int connfd)
{
    char data[MAX] = {0};

    while (1)
    {
        int nread = fread(data, 1, MAX, fp);
        if (nread > 0)
        {
            if (write(connfd, data, nread) == -1)
            {
                perror("Error sending file");
                exit(1);
            }
        }
        if (nread < MAX)
        {
            if (feof(fp))
                printf("File sent successfully.\n");
            if (ferror(fp))
                printf("Error reading file.\n");
            break;
        }
        bzero(data, MAX);
    }
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
        perror("Socket creation failed");
        exit(1);
    }
    printf("Socket created successfully.\n");

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);  // Listen on all interfaces
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0)
    {
        perror("Bind failed");
        exit(1);
    }
    printf("Socket binded to port %d\n", PORT);

    if (listen(sockfd, 5) != 0)
    {
        perror("Listen failed");
        exit(1);
    }
    printf("Server listening...\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (SA *)&cli, &len);
    if (connfd < 0)
    {
        perror("Server accept failed");
        exit(1);
    }
    printf("Client connected.\n");

    printf("Enter filename to send: ");
    scanf("%s", filename);

    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        perror("File not found");
        close(connfd);
        close(sockfd);
        exit(1);
    }

    send_file(fp, connfd);
    fclose(fp);
    close(connfd);
    close(sockfd);
    printf("Connection closed.\n");
    return 0;
}
