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

/*DNN*/
/*datatype input = inputsrc(binary)*/
#define weights = modf(((randn() % 1.0) + 0.0), float *wdiscard);

#define epsilon = 5E-5;

#define sigmoid(z) = (1.0/(1.0+(exp((z--))); /*'derivative of sigmoid' from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d and https://www.neuralnetworksanddeeplearning.com*/

#define sigmoidPrime(z) = sigmoid(z)*(1-sigmoid(z));

#define cost = pow((cost/(-epsilon(weights, bias))), 2); /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com*/

#define bias = modf(((randn() % 1.0) + 0.0), float *bdiscard); /*from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Randomness q*/
#define n = input++; /*input as iterations*/

/*Part of 'My Randomness'*/
#define y = (0 ?: 1); /*logical boolean*/

/*Markov Decision Process?*/
#define reward = (y/(input, n));
#define probability = (n/(input, y));
#define mdp = (probability/(reward+bias)); /*Markov Decision Process*/

/*My Randomness*/
#define q = pow(pow(mdp, n), 2)+y; /*QBit logic?*/
#define r = (q/(reward+bias)); /*QBit logic implemented as MDP*/

float main(float *argv) {
	
	return 0;
}
