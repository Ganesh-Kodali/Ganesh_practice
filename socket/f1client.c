#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define SA struct sockaddr
#define MAX 1024

void receive_file(int sockfd)
{
    FILE *fp;
    char buffer[MAX];
    int n;
    fp = fopen("received_file.txt", "wb");
    if (fp == NULL)
    {
        perror("Cannot create file");
        exit(1);
    }

    while ((n = read(sockfd, buffer, MAX)) > 0)
    {
        fwrite(buffer, 1, n, fp);
    }

    xprintf("File received successfully.\n");
    fclose(fp);
}

int main()
{
    int sockfd;
    struct sockaddr_in servaddr;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1)
    {
        perror("Socket creation failed");
        exit(1);
    }
    printf("Socket created.\n");

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);

    const char *server_ip = "192.168.68.147";
    servaddr.sin_addr.s_addr = inet_addr(server_ip);

    if (connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0)
    {
        perror("Connection to server failed");
        exit(1);
    }
    printf("Connected to server at %s:%d\n", server_ip, PORT);

    receive_file(sockfd);
    close(sockfd);
    printf("Client closed.\n");

