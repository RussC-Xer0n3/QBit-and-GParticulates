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
float out;
float n;
float input;
float grad_descent;
float forward;
float out_layer;
float hidden;
float weight_activate;
float dz;
float x;
float neuron;
float output;

struct input {
    float x;
}input;

struct neuron {
    float neu;
}neuron;

struct output {
    float o;
} output;

/*DNN*/
#define weights = modf(((randn() % 1.0) + 0.0), float *wdiscard); /*define the weights and distribute randomly with mean average deviance discarding the integer in favour of floatvalues*/

#define epsilon = 5E-5; /*learning rate at 30Hz on the EMS safe operating range in the infrared spectrum shouldn't interfere with allocated frequency slots*/

#define sigmoid(z) = (1.0/(1.0+(exp((z--))); /*'derivative of sigmoid' where z is the matrix vertices objectified from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d and https://www.neuralnetworksanddeeplearning.com*/

#define sigmoidPrime(z) = sigmoid(z)*(1-sigmoid(z));

#define grad_descent = pow(((cost)-(cost(epsilon))), 2); /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com i think I have noted this correctly*/
#define cost = (weights, bias);

#define bias = modf(((randn() % 1.0) + 0.0), float *bdiscard); /*I think this is correct interoretation from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Randomness q*/
#define n = input++; /*input as incremental iterations to ensure input continues as a stream while live*/
#define out = simgoid((weights*n)+bias);

/*Part of 'My Randomness'*/
#define y = (0 ?: 1); /*logical boolean*/

/*Markov Decision Process?*/
#define reward = (y/(input, n)); /*for boolean divided across stream and all stream data*/
#define probability = (n/(input, y)); /*calculate the probability in the coninued stream across the input stream and the boolean*/
#define mdp = (probability/(reward+bias)); /*Markov Decision Process*/

/*My Randomness*/
#define q = pow(pow(mdp, n), 2)+y; /*QBit logic? thought about the probability of decision tables and how to implement them, essentialy wha QBits do (from the very basicsof what I have read.)*/
#define r = (q/(reward+bias)); /*QBit logic implemented as MDP to calculate probability of logic being correct and successful.*/

float main(float argc, char **argv) {
    //inputs from structure or header includes
    input.x = 0; 
    input = input.x;
    //Neurons
    neuron.neu = 0;
    neuron = neuron.neu;
    //output
    output.o = 0;
    output = output.o;
    //weights over neurons and inputs outputs
    weights*(input, neuron, output);
    
    //DNN activation and backpropagation
	forward = sigmoidPrime(out*sigmoid+dz);
	out_layer = dz(((sigmoid(n))-(out*sigmoid(n)))*sigmoidPrime(forward));
	hidden = dz((out++*out_layer++) * y);
	weight_activate = dz * sigmoid(input, neuron, output);
	dz = bias++;
	
	//TODO: Training samples and access to them for the inputs.
	//TODO: Gradient of descent for optimising the cost function. 
	
	for (i = 0; i <= n; i++) {
	    mdp;
	    q;
	    r;
    }
    
	return 0;
}
