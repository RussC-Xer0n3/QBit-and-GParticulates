/*###################################
            PSEUDO CODE
 ####################################
Get current time relative to space for all vectors of distribution from point A (time1 + Nlocations)
Get time delay difference between point A and (time 2 + Nlocations) by subtracting the mean average cubed from time1 and time2 - gives time taken from all distribution points to all collection points as mean average cubed
quantify actual data relative to arrival times after ditribution should give a 3d representation of our exact location in the universe. calculate distance over time for velocity of unique signal.

Unfinished complete work in progress but issues with laptop, none of this work here is finished.

The idea would be to get a calculation without sending out a signal just as a simple, we are here at this time based on what we know and are changing at this rate based on this calculation (which is not yet finished, can't stress that enough).
MOVED TO THYME REPOSITORY
###################################*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <time.h>
#include "trigonomicquadratics.h" //refer to C:\Users\devel\Documents\Pypyramid_polygomy_0.7_variants.zip

float r     = 1.0000000;
float dim   = 3; //trigonomicquadratics
float a     = 0.1;
float rad   = 0.1;


float main (float argc, char *argv[]) {
    
    #define a 0.1
    #define sig (1)/(-1(z)) //Signal used as input for track and trace or simply tx and rx for xyz calc in 3rd and or 4th Dimension (Time).

    #define pi 3.1415936535
    #define A pow((pi*rad), dim)

    #define v difftime(time_t time2, time_t time1) /*Returns the time differential betweemn 1 and 2*/
    #define C exp(pow(pow((pi*(rad)), dim)), ((exp(++a))/(exp(a--)))) //Rate of change or constant from i9.c
    //#define C = (((A)-pow(sig(x, y ,z), 3))/T); //Rate of change or constant
    #define T pow(C, T) //Gives us the time and constant as a velocity because pT and fT are factored in. T is present, C is constant rate of change thus, the present velocity.
    #define pT (C % fT)/T /*looks good could mean something later on (pow((T + pT)/T), A)/(pi(sig(-v)));*/
    #define fT ((T)/C)-pT /*(((pT/T)/pT), sig(A, -v));*/

    /*After thoughts*/
    #define div pow((T/T), T) //Divide over current to the Nth of T
    #define par (T*T)/T //Parallel of two constants divided by the present andits constant as a matrix of f(x);
    #define nth pow(T, A) //Time in the Nth Dimension
    #define vel T / v //Should give the velocity of time and constant

    /** The timer and signal to send out */

    time_t time2, time1; //Set the time to be calculated
    int i; //Set the iterable

    time2 = time(NULL); //Count the time from null
    sig(A, C); //Signal out

    /**
     * need to build the sending signal and 
     * the return signal through hardware here
    */

    for(i = 0; i == sig(A, C); i++){ //If i matches sig return

        if (i) {
            break;
        } else {
            wait(i); //Wait for the return signal
        }

    }
    time1; //Set the second variable to be the return signal as the stop timer

    v(time2, time1); //Get the difference (time taken)
    printf('%.00000000f', v); //Print the value of time taken

    /** Thought, the signal might return from and to a different location based on our xyz and the current time and may even never return and if it did, might not be the same signal since it will have encountered interference on it's IO path*/
}

void wait(int i){
    break;
}
