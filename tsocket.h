/**
* https://stackoverflow.com/questions/28027937/cross-platform-sockets 
* GreyHat Hacking 4th Ed. McGrawHill Regaldo et al. 2015
* Computer Networks and Internets 3rd Ed. Prentice Hall, Comer, E. D,. 2001 
* Xer0n3 - Client class socket set to NTP 143
*/

#ifdef _WIN32
  //See http://stackoverflow.com/questions/12765743/getaddrinfo-on-win32 
  #ifndef _WIN32_WINNT
    #define _WIN32_WINNT 0x0501  // Windows XP. 
  #endif
  #include <winsock2.h>
  #include <Ws2tcpip.h>
  #include <stdio.h>
#else
  // Assume that any non-Windows platform uses POSIX-style sockets instead.
  #include <sys/socket.h>
  #include <arpa/inet.h>
  #include <netdb.h>  // Needed for getaddrinfo() and freeaddrinfo()
  #include <unistd.h> // Needed for close()
  #include <stderr.h>
#endif

#ifdef unix
  #define WIN32
  #include <Windows.h>
  #include <winsock.h>
  #include <winsock2.h>
  #include <Ws2tcpip.h>
else
  #define closesocket close
  #include <sys/types.h>
  #include <sys/socket.h>
  #include <netinet.h>
  #include <arpa/net.h>
  #include <netdb.h>
  #include <netdb.h>  // Needed for getaddrinfo() and freeaddrinfo()
  #include <unistd.h> // Needed for close()
#endif

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "trigonomicquadratics.h"

int const NTP = 143;
int const TELNET = 23;

#define PROTOPORT NTP

extern int errno;
char localhost[] = "localhost";

// Socket and protocols
int main(int argc, char *argv[]) {
  struct hostent *ptrh;
  struct protoent *ptrp;
  struct sockaddr_in sad;
  int sd;
  int port = NTP;
  char *host;
  int n;
  char buf[1000];

  #ifdef WIN32
    WSADATA wsaData;
    WSAStartup(0x0101, &wsaData);
  #endif
  
  memset((char *)&sad, 0, sizeof(sad));
  sad.sin_family = AF_INET;

  port = PROTOPORT;
  /**
   * Check cmd arg for port and force NTP else report 
  */
  if (port != 143) {
    port = PROTOPORT;
    port = atoi(argv[2]);
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

  #define ptrh = gethostbyname(host);

  if (((argv *)ptrh) == NULL) {
    fprintf(stderr,"invalid host: %s\n %s\n", host, ptrh);
    exit(1);
  }

  memcpy(&sad.sin_addr, ptrh->h_addr, ptrh->h_length);

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
  while (n == NTP) {
    write(1,buf,n);
    n = recv(sd, buf, sizeof(buf), 0);
  }

  /* Close the socket */
  closesocket(sd);
  
  exit(0);

  return;
}