/**
* Computer Networks and Internets 3rd Ed. Prentice Hall, Comer, E. D,. 2001 
*/

#ifndef unix
  #define WIN32
  #include <Windows.h>
  #include <winsock.h>
#else
  #define closesocket close
  #include <sys/types.h>
  #include <sys/socket.h>
  #include <netinet/in.h>
  #include <netdb.h>  // Needed for getaddrinfo() and freeaddrinfo()
#endif

#include <stdio.h>
#include <string.h>

#define PROTOPORT 5193
#define QLEN 6

int visits = 0;

main(int argc, char *argv[])
{
    struct hostnet *ptrh;
    struct protoent *ptrp;
    struct sockaddr_in sad;
    struct sockaddr_in cad;
    int sd, sd2;
    int port;
    int alen;
    char buf(1000);

#ifdef WIN32 
    WSADATA wsaData;
    WSAStartup(0x0101, &wsaData);
#endif

    memset((char *)&sad,0,sizeof(sad));
    sad.sin_family = AF_INET;
    sad.sin_addr.s_addr = INADDR_ANY;

    if (argc > 1) {
        port = atoi(argv[1]);
    } else {
        port = PROTOPORT;
    }

    if (port > 0) {
        sad.sin_port = htons((u_short)port);
    } else {
        fprintf(stderr, "bad port number %s\n",argv[1]);
        exit(1);
    }

    if (((int)(ptrp = getprotobyname("tcp"))) == 0) {
        fprintf(stderr, "cannot map \"tcp\" to protocol number");
        exit(1);
    }

    sd = socket(PF_INET, SOCK_STREAM, ptrp -> p_proto);
    if (sd < 0) {
        fprintf(stderr, "socket creation failed %s\n");
        exit(1);
    }

    if (bind(sd, (struct sockaddr *)&sad, sizeof(sad)) < 0) {
        fprintf(stderr, "bind failed %s\n");
        exit(1);
    }

    if (listen(sd, QLEN) < 0) {
        fprintf(stderr, "listen failed %s\n");
        exit(1);
    }

    while (1) {
        alen = sizeof(cad);
        
        if ((sd2=accept(sd, (struct sockaddr *)&cad, &alen)) < 0) {
            fprintf(stderr, "accept failed %s\n");
            exit(1);
        }
        visits++;
        sprintf(buf, "This server has been contacted %d time%s\n",visits,visits==1?".":"s.");

        send(sd2, buf, strlen(buf), 0);
        closesocket(sd2);
    }
}