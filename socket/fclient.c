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

// Function to receive file from server
void receive_file(int sockfd)
{
    int n;
    FILE *fp;
    char *filename = "received_file.txt";
    char buffer[MAX];

    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        perror("Error in creating file.");
        exit(1);
    }

    while ((n = read(sockfd, buffer, sizeof(buffer))) > 0)
    {
        fprintf(fp, "%s", buffer);
        bzero(buffer, MAX);
    }

    printf("File received successfully.\n");
    fclose(fp);
}

int main()
{
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;

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

    if (connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0)
    {
        printf("Connection with the server failed...\n");
        exit(0);
    }
    else
        printf("Connected to the server..\n");

    receive_file(sockfd);

    close(sockfd);
    printf("Client closed.\n");

    return 0;
}
