#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX 1024
#define SA struct sockaddr

int main()
{
    int sockfd;
    struct sockaddr_in servaddr;
    char buffer[MAX];
    FILE *fp;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) { perror("Socket creation failed"); exit(1); }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);

    const char *server_ip = "192.168.68.147"; // Server PC IP
    servaddr.sin_addr.s_addr = inet_addr(server_ip);

    if (connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0) { perror("Connection failed"); exit(1); }
    printf("Connected to server.\n");

    fp = fopen("received_file.txt", "rb");  // File on client PC
    if (fp == NULL) { perror("File not found"); exit(1); }

    int n;
    while ((n = fread(buffer, 1, MAX, fp)) > 0) {
        if (write(sockfd, buffer, n) < 0) { perror("Send failed"); exit(1); }
    }

    printf("File sent successfully.\n");
    fclose(fp);
    close(sockfd);
    return 0;
}
