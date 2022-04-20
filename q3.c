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
#include <stdlib.h>
#include <math.h>

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

/*datatype input = inputsrc(binary)*/
struct input {


}input;

void input(){

    return 0;
};

/*path to file and read from log file as training data*/
struct file {


}file;

void file(){

    return 0;
};

/*DNN*/
#define weights = modf(((randn() % 1.0) + 0.0), float *wdiscard); /*define the weights and distribute randomly with mean average deviance discarding the integer in favour of floatvalues*/

#define epsilon = 5E-5; /*learning rate at 30Hz on the EMS safe operating range in the infrared spectrum shouldn't interfere with allocated frequency slots*/

#define sigmoid(z) = (1.0/(1.0+(exp((z--))); /*'derivative of sigmoid' where z is the matrix vertices objectified from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d and https://www.neuralnetworksanddeeplearning.com*/

#define sigmoidPrime(z) = sigmoid(z)*(1-sigmoid(z)); /*TODO: ? look into the sigmoid prime*/

#define cost = pow((cost/(-epsilon(weights, bias))), 2); /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com i think I have noted this correctly*/

#define bias = modf(((randn() % 1.0) + 0.0), float *bdiscard); /*I think this is correct interoretation from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Randomness q*/
#define n = input()++; /*input as incremental iterations to ensure input continues as a stream*/

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
