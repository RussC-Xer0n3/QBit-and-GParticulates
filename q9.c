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

float WEIGHT;
float weights;
float EPSILON;
float SIGMOID;
float SIGMOIDPRIME;
float COST;
float BIAS;
float REWARD;
float PROBABILITY;
float MDP;
float Q;
float R;
float OUT;
float N;
float input;
float Grad_descent;
float forward;
float out_layer;
float hidden;
float weight_activate;
float dz;
float x;
float neuron;
float output;
float neu;
float Y;

struct input {
    x;
}input;

struct neuron {
    neu;
}neuron;

struct output {
    o;
}output;

/*DNN*/
#define WEIGHT modf(((randn() % 1.0) + 0.0), float *wdiscard); /*define the weights and distribute randomly with mean average deviance discarding the integer in favour of floatvalues*/

#define EPSILON 5E-5; /*learning rate at 30Hz on the EMS safe operating range in the infrared spectrum shouldn't interfere with allocated frequency slots*/

#define SIGMOID(z) (1.0 / (1.0 + (exp((z--))); /*'derivative of sigmoid' where z is the matrix vertices objectified from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d and https://www.neuralnetworksanddeeplearning.com standard could be but new to sigmoids ((1) / (-1)) */

#define SIGMOIDPRIME(z) (SIGMOID(z) * (1-SIMGOID(z));

#define GRAD_DESCENT pow(((COST) - (COST(EPSILON))), 2); /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com i think I have noted this correctly*/
#define COST (weights, BIAS);

#define BIAS modf(((randn() % 1.0) + 0.0), float *bdiscard); /*I think this is correct interoretation from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Randomness q*/
#define N input++; /*input as incremental iterations to ensure input continues as a stream while live*/
#define OUT SIGMOID((weights * N) + BIAS);

/*Part of 'My Randomness'*/
#define Y (0 ?: 1); /*logical boolean*/

/*Markov Decision Process?*/
#define REWARD (Y / (input, N)); /*for boolean divided across stream and all stream data*/
#define PROBABILITY (N / (input, Y)); /*calculate the probability in the coninued stream across the input stream and the boolean*/
#define MDP (PROBABILITY / (REWARD + BIAS)); /*Markov Decision Process*/

/*My Randomness*/
#define Q pow(pow(MDP, N), 2) + Y; /*QBit logic? thought about the probability of decision tables and how to implement them, essentialy wha QBits do (from the very basicsof what I have read.)*/
#define R (Q / (REWARD + BIAS)); /*QBit logic implemented as MDP to calculate probability of logic being correct and successful.*/

float main(float argc, char **argv) {
    
    //inputs from structure or header includes
    input.x = 746; //pixels per sample for example 
    input = (input.x, training);
    
    //Neurons
    neuron.neu = 10*(pow(20, 4)); //implements a full DNN in the hidden layers similar to neurological dimensions
    neuron = neuron.neu;
    
    //output
    output.o = 10; //example, we want to classify 10 digits from samples.
    output = output.o;
    
    //weights distributed to the quantity of neurons, inputs and outputs
    weights = WEIGHT*(input, neuron, output);
    
    //DNN activation and backpropagation
    dz = BIAS++;
    weight_activate = dz * SIGMOID(input, neuron, output);
	forward = SIGMOIDPRIME((out * sigmoid) + dz);
	hidden = dz((out++ * out_layer++) * y);
	out_layer = dz(((SIGMOID(N))-(OUT * SIGMOID(N))) * SIGMOIDPRIME(forward));
	
	
	//TODO: Training samples and access to them for the inputs.
	training = (sample in path to training samples); // for loop
	//TODO: Gradient of descent for optimising the cost function. 
	
	for (i = 0; i <= n; i++) {
	    MDP;
	    Q;
	    R;
    }
    
	return 0;
}
