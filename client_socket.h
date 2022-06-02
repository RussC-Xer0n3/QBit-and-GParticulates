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
#include <arpa/inet.h>
#include <netdb.h>
#endif

#include <stdio.h>
#include <string.h>

#define PROTOPORT 5193

extern int errno;
char localhost[] = "localhost";

// Socket and protocols
main(argc, argv)
int argc;
char *argv[];
{
  struct hostent *ptrh;
  struct protoent *ptrp;
  struct sockaddr_in sad;
  int sd;
  int port = PROTOPORT;
  char *host;
  int n;
  char buf[1000];

#ifdef WIN32
  WSADATA wsaData;
  WSAStartup(0x0101, &wsaData);
#endif
  
  memset((char *)&sad, 0, sizeof(sad));
  sad.sin_family = AF_INET;

  if (argc > 2) {
      port = atoi(argv[2]);
  } else {
      port = PROTOPORT;
  }

  /**
   * Check cmd arg for port and force NTP else report 
  */
  if (port > 0) {
    sad.sin_port = htons((u_short)port);
  } else {
    fprintf(stderr, "bad port number %s\n", argv[2]);
    exit(1);
  }

  /**
   * check host arg and assign hostname
  */
  if (argc > 1){
    //if host specified
    host = argv[1];
  } else {
    //bind to local here we need to bind to local ports on trigonomicquadratics
    host = "localhost";
  }

  ptrh = gethostbyname(host);
  if (((char *)ptrh) == NULL) {
    fprintf(stderr,"invalid host: %s\n %s\n", host);
    exit(1);
  }

  memcpy(&sad.sin_addr, ptrh -> h_addr, ptrh -> h_length);

  if (((int)(ptrp = getprotobyname("tcp"))) == 0) {
    fprintf(stderr,"cannot map \"tcp\" to protocol number: %s\n", ptrp);
    exit(1);
  }

  sd = socket(PF_INET, SOCK_STREAM, ptrp->p_proto);
  if (sd < 0){
    fprintf(stderr,"socket creation failed: %s\n %s\n %s\n", PF_INET, SOCK_STREAM, ptrp);
    exit(1);
  }

  if (connect(sd, (struct sockaddr *)&sad, sizeof(sad)) <= 0){
    fprintf(stderr,"connect failed: %s\n", sd);
    exit(1);
  }

  n = recv(sd, buf, sizeof(buf), 0);
  while (n > 0) {
    write(1,buf,n);
    n = recv(sd, buf, sizeof(buf), 0);
  }

  /* Close the socket */
  closesocket(sd);
  
  exit(0);

  return;
}
