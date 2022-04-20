/**
#######################
#	   PSEUDO CODE	  #
#######################
* weights = random function
* input = null
* bias = should be the bias between the actual information received through the input,
* compared to the potential data and quantified with the probability of x or y decisions over intent.  
*
* epsilon = 05-e5 learning rate
* sigmoid function ((weights*input)+bias) or 1/1+E(w*i)+b)-z
*
* x=(p|j') mdp for a in s across all s' calc prob and issue reward
* where a = y, s = i, s' = i++.
* y=(0&|1) boolean
* n=input++
* q = ((x**n)**2)+y
*
*  NOTES: look into malloc
*  and mem manipulation since 
*  this will be intensive 
*  possibly
*
* implement the DNN
* implement he MDP
* Apply the QBit logic to the MDP
* feed the DNN output to the MDP back prop to DNN
* Output the results
* Quantify the results
*
* Russell A E Clarke 
######################
*/

#include <stdio.h>
#include <float.h>
#include <stdlib.h> //malloc
#include <math.h>

//Network Inputs
#include <netinet/in.h>
#include <errno.h>
#include <netdb.h>   
#include <string.h>	//strlen

#include <netinet/ip_icmp.h>	//Provides declarations for icmp header 
#include <netinet/udp.h>	//Provides declarations for udp header 
#include <netinet/tcp.h>	//Provides declarations for tcp header 
#include <netinet/ip.h>	//Provides declarations for ip header 
#include <netinet/if_ether.h>	//For ETH_P_ALL 
#include <net/ethernet.h>	//For ether_header 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <sys/ioctl.h> 
#include <sys/time.h> 
#include <sys/types.h> 
#include <unistd.h> 

float weights;
float epsilon;
float sigmoid;
float sigmoidPrime;
float cost;
float bias;
float reward;
float probability;
float mdp;
float q;
float r;

/*Learning a bit about structures in C at the moment, they are similar in nature to objects in Java
* I found this tasty piece of code from binarytides and have implemented the setsocketopt (hopefully)
* on line number 109 onwards. The idea would be to train the model on the stream of incoming and outgoing data
* then rmeove or null the sniffer and implement training from the log file(s), just an idea of the sort of input which
* could be used and could even implement more protocols.
*/

struct input {
/*
https://www.binarytides.com/packet-sniffer-code-in-c-using-linux-sockets-bsd-part-2/
provide the correct interface name to setsockopt
*/

void ProcessPacket(unsigned char*, int); 
void print_ip_header(unsigned char*, int); 
void print_tcp_packet(unsigned char*, int); 
void print_udp_packet(unsigned char*, int); 
void print_icmp_packet(unsigned char*, int); 
void PrintData (unsigned char*, int); 

FILE *logfile; 
struct sockaddr_in source, dest; 
int tcp=0,udp=0,icmp=0,others=0,igmp=0,total=0,i,j;	 

int main() { 	

    int saddr_size , data_size;
    struct sockaddr saddr; 		 	
    
    unsigned char *buffer = (unsigned char *) malloc(65536); //Its Big! 	 	
    
    logfile=fopen("log.txt","w");
    
    if(logfile==NULL)
    {
        printf("Unable to create log.txt file."); 	
    }
    printf("Starting...\n"); 	 	

    int sock_raw = socket( AF_PACKET , SOCK_RAW , htons(ETH_P_ALL)); ///usr/include/linux/ warn: be careful with eth_p_all
    /* ####    MODDED    ####
    * Here, what I have tried to do is loop through the first dimension because we need max 20 types of socket type
    * Then Applied the 6 types of socket with their numerical values to the second dimension of matrices
    * Following this return the integer value of one complete array 'uvwxyz' to be added to the second dimension
    * And return the matrix in full
    * Then I have attempted to allocate the full matrix to the setsocketopt
    * Probably won't work but the logic is there. Worth a try.
    */
    int matrix[20][6] = {};
    
    for (i = 0; i <= 19; i++)
    {
        int k[6] = {};
        int matrix[20][6] = {};
        
        //setsocketopt
        for (j = 0; j <= 19; j++)
        {
            unsigned char u = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "wlan%d", j, strlen(("wlan%d", j))+ 1 );
            if (("wlan%d", j) == NULL) {continue;}
            unsigned char v = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "eno%d", j, strlen(("eno%d", j))+ 1 );
            if (("eno%d", j) == NULL) {continue;}
            unsigned char w = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "enp%ds*", j, strlen(("enp%ds*", j))+ 1 );
            if (("enp%ds*", j) == NULL) {continue;}
            unsigned char x = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "eth%d", j, strlen(("eth%d", j))+ 1 );
            if (("eth%d", j) == NULL) {continue;}
            unsigned char y = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "wlo%d", j, strlen(("wlo%d", j))+ 1 );
            if (("wlo%d", j) == NULL) {continue;}
            unsigned char z = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "vnet%d", j, strlen(("vnet%d", j))+ 1 );
            if (("vnet%d", j) == NULL) {continue;}
            /*l = setsockopt(sock_raw , SOL_SOCKET , SO_BINDTODEVICE , "lo" , strlen("lo")+ 1 );
            if ("lo" == NULL) {continue;}*/
            
            int k[6] = {u, v, w, x, y, z};
            
            return k[*]; // * experimental since other than mathematical operators is logical 'all'.
        }
        
        return matrix[i][k];
    }
    
    setsockopt = matrix[*][*]; //might not work
       
    if(sock_raw < 0) 
    { //Print the error with proper message 		
        perror("Socket Error"); 		
        return 1; 	
    } 
    while(1)
    {
        saddr_size = sizeof saddr; 		//Receive a packet 		
        data_size = recvfrom(sock_raw , buffer , 65536 , 0 , &saddr , (socklen_t*)&saddr_size);
        if(data_size <0)
        {
            printf("Recvfrom error , failed to get packets\n");
            return 1;
        } 		
        //Now process the packet 		
        ProcessPacket(buffer , data_size);
    }
    close(sock_raw);
    printf("Finished");
    return 0;
}
    
void ProcessPacket(unsigned char* buffer, int size)
{
    //Get the IP Header part of this packet , excluding the ethernet header 	
    struct iphdr *iph = (struct iphdr*)(buffer + sizeof(struct ethhdr)); 	
    ++total; 	
    switch (iph->protocol) //Check the Protocol and do accordingly...
    {
     		case 1: //ICMP Protocol 			
                    ++icmp; 			
                    print_icmp_packet( buffer , size); 			
                    break; 		 		
     
            case 2: //IGMP Protocol 			
                    ++igmp; 			
                    break; 		 		
     
            case 6: //TCP Protocol 			
                    ++tcp; 			
                    print_tcp_packet(buffer , size); 			
                    break; 		 		
     
            case 17: //UDP Protocol 			
                    ++udp; 			
                    print_udp_packet(buffer , size); 			
                    break; 		 		
     
            default: //Some Other Protocol like ARP etc. 			
                    ++others; 			
                    break; 	
    } 	
    printf("TCP : %d UDP : %d ICMP : %d IGMP : %d Others : %d Total : %d\r", tcp , udp , icmp , igmp , others , total); 
}

void print_ethernet_header(unsigned char* Buffer, int Size)
{
    struct ethhdr *eth = (struct ethhdr *)Buffer;
    
    fprintf(logfile , "\n"); 	
    fprintf(logfile , "Ethernet Header\n");
    fprintf(logfile , " |-Destination Address : %.2X-%.2X-%.2X-%.2X-%.2X-%.2X \n", eth->h_dest[0] , eth->h_dest[1] , eth->h_dest[2] , eth->h_dest[3] , eth->h_dest[4] , eth->h_dest[5] );
    fprintf(logfile , " |-Source Address : %.2X-%.2X-%.2X-%.2X-%.2X-%.2X \n", eth->h_source[0] , eth->h_source[1] , eth->h_source[2] , eth->h_source[3] , eth->h_source[4] , eth->h_source[5] );
    fprintf(logfile , " |-Protocol : %u \n",(unsigned short)eth->h_proto); 
}
    
void print_ip_header(unsigned char* Buffer, int Size)
{
    print_ethernet_header(Buffer , Size);

    unsigned short iphdrlen; 		 	
    
    struct iphdr *iph = (struct iphdr *)(Buffer + sizeof(struct ethhdr));
    iphdrlen =iph->ihl*4; 	
     	
    memset(&source, 0, sizeof(source));
    source.sin_addr.s_addr = iph->saddr;
    
    memset(&dest, 0, sizeof(dest));
    dest.sin_addr.s_addr = iph->daddr;
    
    fprintf(logfile , "\n");
    fprintf(logfile , "IP Header\n"); 	
    fprintf(logfile , " |-IP Version : %d\n",(unsigned int)iph->version);
    fprintf(logfile , " |-IP Header Length : %d DWORDS or %d Bytes\n",(unsigned int)iph->ihl,((unsigned int)(iph->ihl))*4);
    fprintf(logfile , " |-Type Of Service : %d\n",(unsigned int)iph->tos);
    fprintf(logfile , " |-IP Total Length : %d Bytes(Size of Packet)\n",ntohs(iph->tot_len));
    fprintf(logfile , " |-Identification : %d\n",ntohs(iph->id)); 	
    //fprintf(logfile , " |-Reserved ZERO Field : %d\n",(unsigned int)iphdr->ip_reserved_zero); 	
    //fprintf(logfile , " |-Dont Fragment Field : %d\n",(unsigned int)iphdr->ip_dont_fragment); 	
    //fprintf(logfile , " |-More Fragment Field : %d\n",(unsigned int)iphdr->ip_more_fragment); 	
    fprintf(logfile , " |-TTL : %d\n",(unsigned int)iph->ttl); 	
    fprintf(logfile , " |-Protocol : %d\n",(unsigned int)iph->protocol); 	
    fprintf(logfile , " |-Checksum : %d\n",ntohs(iph->check)); 	
    fprintf(logfile , " |-Source IP : %s\n",inet_ntoa(source.sin_addr)); 	
    fprintf(logfile , " |-Destination IP : %s\n",inet_ntoa(dest.sin_addr)); 
} 
    
void print_tcp_packet(unsigned char* Buffer, int Size)
{
    unsigned short iphdrlen;
    
    struct iphdr *iph = (struct iphdr *)( Buffer + sizeof(struct ethhdr)); 
    iphdrlen = iph->ihl*4; 	 	
    
    struct tcphdr *tcph=(struct tcphdr*)(Buffer + iphdrlen + sizeof(struct ethhdr)); 

    int header_size = sizeof(struct ethhdr) + iphdrlen + tcph->doff*4; 	 	

    fprintf(logfile , "\n\n***********************TCP Packet*************************\n");	 		 	

    print_ip_header(Buffer,Size); 		 	

    fprintf(logfile , "\n"); 	
    fprintf(logfile , "TCP Header\n"); 	
    fprintf(logfile , " |-Source Port : %u\n",ntohs(tcph->source)); 	
    fprintf(logfile , " |-Destination Port : %u\n",ntohs(tcph->dest)); 	
    fprintf(logfile , " |-Sequence Number : %u\n",ntohl(tcph->seq)); 	
    fprintf(logfile , " |-Acknowledge Number : %u\n",ntohl(tcph->ack_seq)); 	
    fprintf(logfile , " |-Header Length : %d DWORDS or %d BYTES\n" ,(unsigned int)tcph->doff,(unsigned int)tcph->doff*4); 	
    //fprintf(logfile , " |-CWR Flag : %d\n",(unsigned int)tcph->cwr); 	
    //fprintf(logfile , " |-ECN Flag : %d\n",(unsigned int)tcph->ece); 	
    fprintf(logfile , " |-Urgent Flag : %d\n",(unsigned int)tcph->urg); 	
    fprintf(logfile , " |-Acknowledgement Flag : %d\n",(unsigned int)tcph->ack); 	
    fprintf(logfile , " |-Push Flag : %d\n",(unsigned int)tcph->psh); 	
    fprintf(logfile , " |-Reset Flag : %d\n",(unsigned int)tcph->rst); 	
    fprintf(logfile , " |-Synchronise Flag : %d\n",(unsigned int)tcph->syn); 	
    fprintf(logfile , " |-Finish Flag : %d\n",(unsigned int)tcph->fin); 	
    fprintf(logfile , " |-Window : %d\n",ntohs(tcph->window)); 	
    fprintf(logfile , " |-Checksum : %d\n",ntohs(tcph->check)); 	
    fprintf(logfile , " |-Urgent Pointer : %d\n",tcph->urg_ptr); 	
    fprintf(logfile , "\n"); 	
    fprintf(logfile , " DATA Dump "); 	
    fprintf(logfile , "\n"); 		 	

    fprintf(logfile , "IP Header\n"); 	
    PrintData(Buffer,iphdrlen); 		 	

    fprintf(logfile , "TCP Header\n"); 	
    PrintData(Buffer+iphdrlen,tcph->doff*4); 		 	

    fprintf(logfile , "Data Payload\n");	 	
    PrintData(Buffer + header_size , Size - header_size ); 						 	

    fprintf(logfile , "\n###########################################################"); 
} 

void print_udp_packet(unsigned char *Buffer , int Size)
{
    unsigned short iphdrlen; 	 	

    struct iphdr *iph = (struct iphdr *)(Buffer + sizeof(struct ethhdr)); 	
    iphdrlen = iph->ihl*4; 	 	

    struct udphdr *udph = (struct udphdr*)(Buffer + iphdrlen + sizeof(struct ethhdr)); 	 	

    int header_size = sizeof(struct ethhdr) + iphdrlen + sizeof udph; 	 	

    fprintf(logfile , "\n\n***********************UDP Packet*************************\n"); 	 	

    print_ip_header(Buffer,Size);			 	 	

    fprintf(logfile , "\nUDP Header\n"); 	
    fprintf(logfile , " |-Source Port : %d\n" , ntohs(udph->source)); 	
    fprintf(logfile , " |-Destination Port : %d\n" , ntohs(udph->dest)); 	
    fprintf(logfile , " |-UDP Length : %d\n" , ntohs(udph->len)); 	
    fprintf(logfile , " |-UDP Checksum : %d\n" , ntohs(udph->check)); 	 	

    fprintf(logfile , "\n"); 	
    fprintf(logfile , "IP Header\n"); 	
    PrintData(Buffer , iphdrlen); 		 	

    fprintf(logfile , "UDP Header\n"); 	
    PrintData(Buffer+iphdrlen , sizeof udph); 		 	

    fprintf(logfile , "Data Payload\n");	
     	 	
    //Move the pointer ahead and reduce the size of string 	
    PrintData(Buffer + header_size , Size - header_size); 	 	

    fprintf(logfile , "\n###########################################################");
}

void print_icmp_packet(unsigned char* Buffer , int Size)
{
    unsigned short iphdrlen; 	 	

    struct iphdr *iph = (struct iphdr *)(Buffer + sizeof(struct ethhdr)); 	
    iphdrlen = iph->ihl * 4; 	 	

    struct icmphdr *icmph = (struct icmphdr *)(Buffer + iphdrlen + sizeof(struct ethhdr)); 	 	

    int header_size = sizeof(struct ethhdr) + iphdrlen + sizeof icmph; 	 	

    fprintf(logfile , "\n\n***********************ICMP Packet*************************\n");	 	 	

    print_ip_header(Buffer , Size); 			 	

    fprintf(logfile , "\n"); 		 	

    fprintf(logfile , "ICMP Header\n"); 	
    fprintf(logfile , " |-Type : %d",(unsigned int)(icmph->type));
    			 	
    if((unsigned int)(icmph->type) == 11)
    {		
        fprintf(logfile , " (TTL Expired)\n");
    }
    else if((unsigned int)(icmph->type) == ICMP_ECHOREPLY)
    {   		
        fprintf(logfile , " (ICMP Echo Reply)\n");    	
    }
          	
    fprintf(logfile , " |-Code : %d\n",(unsigned int)(icmph->code)); 	
    fprintf(logfile , " |-Checksum : %d\n",ntohs(icmph->checksum)); 	
    //fprintf(logfile , " |-ID : %d\n",ntohs(icmph->id)); 	
    //fprintf(logfile , " |-Sequence : %d\n",ntohs(icmph->sequence)); 	
    fprintf(logfile , "\n"); 	
    
    fprintf(logfile , "IP Header\n"); 	
    PrintData(Buffer,iphdrlen); 		 	
    
    fprintf(logfile , "UDP Header\n"); 	
    PrintData(Buffer + iphdrlen , sizeof icmph); 		 	
    
    fprintf(logfile , "Data Payload\n");	 	 	
    
    //Move the pointer ahead and reduce the size of string 	
    PrintData(Buffer + header_size , (Size - header_size) ); 	 	
    
    fprintf(logfile , "\n###########################################################"); 
} 

void PrintData (unsigned char* data , int Size)
{    
    int i , j; 	
    for(i=0 ; i < Size ; i++)
    { 		
        if( i!=0 && i%16==0) //if one line of hex printing is complete... 		
        { 
            fprintf(logfile , " "); 			
            for(j=i-16 ; j<i ; j++)
                {
                    if(data[j]>=32 && data[j]<=128)
                        fprintf(logfile , "%c",(unsigned char)data[j]); //if its a number or alphabet 				 				

                    else
                        fprintf(logfile , "."); //otherwise print a dot 			
                }
           		fprintf(logfile , "\n");
        }
             	
     	if(i%16==0) fprintf(logfile , " ");
     	    fprintf(logfile , " %02X",(unsigned int)data[i]);
     	     				 		
     	if( i==Size-1) //print the last spaces 		
     	{			
     	    for(j=0;j<15-i%16;j++)
     	    {
     	        fprintf(logfile , " "); //extra spaces 			
     	    }
     	        			 			
     	    fprintf(logfile , " "); 			 			
     	    
     	    for(j=i-i%16 ; j<=i ; j++)
     	    {
     	        if(data[j]>=32 && data[j]<=128) 				
     	        { 				 
     	            fprintf(logfile , "%c",(unsigned char)data[j]);
     	        }
     	        else
     	        {
     	            fprintf(logfile , ".");
     	        }
     	    } 			 			

     	    fprintf(logfile , "\n" ); 		
        } 	
    } 
}

}input;

/*DNN*/
#define weights = modf(((randn() % 1.0) + 0.0), float *wdiscard); /*define the weights and distribute randomly with mean average deviance discarding the integer in favour of floatvalues*/

#define epsilon = 5E-5; /*learning rate at 30Hz on the EMS safe operating range in the infrared spectrum shouldn't interfere with allocated frequency slots*/

#define sigmoid(z) = (1.0/(1.0+(exp((z--))); /*'derivative of sigmoid' where z is the matrix vertices objectified from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d and https://www.neuralnetworksanddeeplearning.com*/

#define sigmoidPrime(z) = sigmoid(z)*(1-sigmoid(z)); /*TODO: ? look into the sigmoid prime*/

#define cost = pow((cost/(-epsilon(weights, bias))), 2); /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com i think I have noted this correctly*/

#define bias = modf(((randn() % 1.0) + 0.0), float *bdiscard); /*I think this is correct interoretation from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Randomness q*/
#define n = input++; /*input as incremental iterations to ensure input continues as a stream while live*/

/*Part of 'My Randomness'*/
#define y = (0 ?: 1); /*logical boolean*/

/*Markov Decision Process?*/
#define reward = (y/(input, n)); /*for boolean divided across stream and all stream data*/
#define probability = (n/(input, y)); /*calculate the probability in the coninued stream across the input stream and the boolean*/
#define mdp = (probability/(reward+bias)); /*Markov Decision Process*/

/*My Randomness*/
#define q = pow(pow(mdp, n), 2)+y; /*QBit logic? thought about the probability of decision tables and how to implement them, essentialy wha QBits do (from the very basicsof what I have read.)*/
#define r = (q/(reward+bias)); /*QBit logic implemented as MDP to calculate probability of logic being correct and successful.*/

float main(float *argv) {
	
	return 0;
}
