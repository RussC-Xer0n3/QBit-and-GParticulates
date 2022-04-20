/**
#######################
#	   PSEUDO CODE	  #
#######################
weights = random function
input = null
bias = 

epsilon = 05-e5
sigmoid function ((weights*input)+bias)

x=(p|j')
y=(0&|1)
n=int
((x**n)**2)+y

*  NOTES: look into malloc
*  and mem manipulation since 
*  this will be intensive 
*  possibly

* Russell A E Clarke 
######################
*/

#include <stdio.h>
#include <float.h>

float epsilon;
float sigmoid;
float cost;
float bias;
float reward;
float probability;
float mdp;
float q;

/*DNN*/
/*datatype input = inputsrc(binary)*/
float weights = rand(void);
#define epsilon = 5E-5;
#define sigmoid = (((weights*inputs)+bias)/(1-(weights/inputs)-bias)); /*'derivative of sigmoid' from https://www.medium.com/analytics-vidhya/building-neural-network-framework-in-c-using-backpropagation-8ad589a0752d */
#define cost = ((weights, bias)/cost)^2; /*mean squared error or 'quadratic cost function' https://www.neuralnetworksanddeeplearning.com/chap1.html */
#define bias = (bias-(epsilon/input))*bias; /*from 'update minibatch function' in https://www.neuralnetworksanddeeplearning.com*/

/*Both DNN and My Function q*/
#define n = input++; /*input as iterations*/

/*Part of 'My Randomness'*/
#define y = (0 ?: 1); /*logical boolean*/

/*Markov Decision Process?*/
#define reward = ((y)/(input, n));
#define probability = ((n)/(input, y));
#define mdp = ((probability/(reward+bias));

/*My Randomness*/
#define q = ((mdp^n)^2)+y;

float main(float *argv) {
	
	return 0;
}
