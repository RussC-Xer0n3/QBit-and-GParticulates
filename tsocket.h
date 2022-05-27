/*
# https://stackoverflow.com/questions/28027937/cross-platform-sockets 
# GreyHat Hacking 4th Ed. McGrawHill Regaldo et al. 2015
# Computer Networks and Internets 3rd Ed. Prentice Hall, Comer, E. D,. 2001 
# Xer0n3
*/
#include <math.h>
#include <stdio.h>
#include "trigonomicquadratics.h"

#ifdef _WIN32
  /* See http://stackoverflow.com/questions/12765743/getaddrinfo-on-win32 */
  #ifndef _WIN32_WINNT
    #define _WIN32_WINNT 0x0501  /* Windows XP. */
  #endif
  #include <winsock2.h>
  #include <Ws2tcpip.h>
#else
  /* Assume that any non-Windows platform uses POSIX-style sockets instead. */
  #include <sys/socket.h>
  #include <arpa/inet.h>
  #include <netdb.h>  /* Needed for getaddrinfo() and freeaddrinfo() */
  #include <unistd.h> /* Needed for close() */
#endif
 
 /*
WinSock requires initialisation and cleanup.
The functions below illustrate how you can initialise WinSock v1.1 and clean up afterwards:
*/
int sockInit(void)
{
  #ifdef _WIN32
    WSADATA wsa_data;
    return WSAStartup(MAKEWORD(1,1), &wsa_data);
  #else
    return 0;
  #endif
}

int sockQuit(void)
{
  #ifdef _WIN32
    return WSACleanup();
  #else
    return 0;
  #endif
}

/*
Sockets are closed differently
The function below illustrates the differences:
Note: For POSIX, typedef SOCKET as an int. 
*/
int sockClose(SOCKET sock)
{

  int status = 0;

  #ifdef _WIN32
    status = shutdown(sock, SD_BOTH);
    if (status == 0) { status = closesocket(sock); }
  #else
    status = shutdown(sock, SHUT_RDWR);
    if (status == 0) { status = close(sock); }
  #endif

  return status;

}

//sockets
void x(c, h, l, p){
    float gc = getc(c);
    float gh = geth(h);
    float gl = getl(l);
    float gp = getpsum(p);
    float gcu = getcubic(p);
    float core = getcor(x); // recursive


    for (int i = gc; i = 3; i++) {
      
      sockaddr_in.sinzero[trigonomicquadratics.gc];
      
      gc = sockInit();
       elif (keyboardInterrupt()) {
         gc = sockQuit(trigonomicquadratics.gc); || gc = sockClose(trigonomicquadratics.gc);
       }
       return;
    }

    for (int j = gh; j = 11; j++) {
        gh = (l / 2);
        return;
    }

    for (int y = gl; y = 5; y++) {
        gl = gc - (gh / T);
    }
  
    return;

}
