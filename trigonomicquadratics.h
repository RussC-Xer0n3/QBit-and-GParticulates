/*
# https://stackoverflow.com/questions/28027937/cross-platform-sockets 
# GreyHat Hacking 4th Ed. McGrawHill Regaldo et al. 2015
# Computer Networks and Internets 3rd Ed. Prentice Hall, Comer, E. D,. 2001 
# Xer0n3
# The ppurpose of the methods enclosed are to create an equlateral pyramid
# network for the purposes of precision location, mathematical rendering of
# polygonal network interference in emf/emp and to assist in the precision of 
# network calculations in T11.c
# THERE ARE HALFWAY POINTS ON EACH HYPOTENUSE FOR THE PURPOSES OF CAL AND PRECISION
# The sockets will hopefully be unified to both srcnsync, they will encapsulate t11.c
# and derivatives and feed back into t11.c NN and AI for TPD((Time partial derivatives))
*/

#include <math.h>
#include <stdio.h>
#include "tsocket_server.h"
#include "tsocket_client.h"

const float c = 8.000; // bits corners
const float h = 16.000; // bits half of l connection destination
const float l = 32.000; // sum of h * 2 length between 2c

void getc(c){
    // 4096 bits per port point in the network
    return c= pow(c, 4);
}

void geth(h){
    //return the cosine of equilateral connectivity at halfway
    return h = 12*(cos(60));
}

void getl(l, c, h){
    /*
    * return the full length of one path relative to the port
    * points and removal of all other parts of the network
    * from a calculation perspective permitting analysis of one
    * bidirectional WNetConnectionDialog1
    */
    return l = ((c, h) - ((2 * c), (10 * h)));
}

void getpsummised(c, h, l){
    /*
    * returns the summise of all parts of the contained network
    * ports relative to Thyme
    */    
    return psummised = sum(c, h, l);
}

void getcubic(p){
    /*
    * return the cubic total of the network feed 
    */
    return cubic = pow(p, 3);
}

void getx(c, l, h){
    /**
     * changes the remainder to a definitive closed remainder of the vnetwork
    */
    return x = (c%sum(c,h,l)) == ((c,l) - sum(c,h,l));
}

void getcor(x){
    /**
     * cor(x) is the angle at which the network transfers data where x is the c value c0 - c3
    */
    return cor = (x = cos(60));
}

/*I'll have a think on proc, perhas some sockets*/
void proc (c, cor, x, l, h) {

    /**
     * set all the cs and cc to socket servers for the NTP
     * set the pipes between to zero
    */

    //server and client respectively
    const cs0, cs1, cs2, cs3 = tsockserve();
    const cc0, cc1, cc2, cc3 = tsockclient();

    //time or physical distances from each sync/src (client/server)
    float ch0, ch1, ch2, ch3 = 0.0000000;
    float cl0, cl1, cl2, cl3 = 0.0000000; 

    //Multidimensional array Assisgnment
    /**
     * One tier Matrix as a singularity
     * middle tier sets of
     * first tier variables
     */

    int matrix[1][4][4] = {{{cs0},{cc0},{ch0},{cl0}},       //0
                           {{cs1},{cc1},{ch1},{cl1}},       //1
                           {{cs2},{cc2},{ch2},{cl2}},       //2
                           {{cs3},{cc3},{ch3},{cl3}}};      //3

    //Lets do some stuff in the processor (proc)
    //equilateral scale
    for (int s = 0; s <= matrix[1][4][s-2]; s++) {
        //set the cosine of the corners (sync/src)
        srcnsync = getcor.cor([0][4][s]);

        //#######      SOME CONSIDERATIONS     #######//
        //#### ((s * s) - pow(sum([0][s],[1][s]), 3));
        //#### ((s * s) - pow(sum([0][s],[1][s]), 4));
        //#### ((s, s) - pow(sum([0][s],[1][s]), 4));
        //#### ((s, s) * pow(sum([0][s],[1][s]), 3));
        //#### other derivatives ETC
        //############################################//

        // from the python code I wrote last year (n + (n * 2))
        // go through the src/sync array and assign scale to be set at initial scale to 1
        /**
         * What we are saying here is for index 0 and 1 in multi dimensional index (MDI) 1
         * perform increments and ommit the last to indices of the MDI 1 in a zero index MDA
         * do so cubically to create a pyramid where we are initially focusing on the src and sync
         * and their relative distance from eachother - 1 unit.
         * where cs and cc are server and client respectively
         * ch is halfway and cl is the hypotenuse
         * the indices 0-3 are the numerical values of each, equilateral, 4 points
         * each point can comm with eachother point and so there is no need for 
         * 12 halfway points and 6 hypotenuse as each srcnsync has a unique index 0 - 3
         * 
         * an object
        */
        const cosine () #define scale => ({(([s][s][srcnsync] + pow([s][s][srcnsync] * 3)) - [s][s][s]) = 1});

        /**
         * set the cosine for each srcnsync and include in comms 
        
        cosine = getcor(scale);
        */

        /**
         * set the cosine for the halfway points and assign it as an object.
        */
        halfwayCosine = {[][][]};
        for (int h = 0; h <= matrix[1][4][--2 h];) {
            halfwayCosine = geth(h);
            return;
        }

        /**
         * 
        */

    }
}
