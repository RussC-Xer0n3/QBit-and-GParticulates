<style>
/* The dropdown container */
.dropdown {
  float: left;
  overflow: hidden;
}
/* Dropdown button */
.dropdown .dropbtn {
  font-size: 16px;
  border: none;
  outline: none;
  color: white;
  padding: 14px 16px;
  background-color: inherit;
  font-family: inherit; /* Important for vertical align on mobile phones */
  margin: 0; /* Important for vertical align on mobile phones */
}
/* Add a red background color to navbar links on hover */
.navbar a:hover, .dropdown:hover .dropbtn {
    background-color: aliceblue;
    color: teal;
  }
  /* Dropdown content (hidden by default) */
.dropdown-content {
  display: none;
  position: absolute;
  background-color: teal;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}
/* Links inside the dropdown */
.dropdown-content a {
  float: none;
  color: aliceblue;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
  text-align: left;
}
/* Add a grey background color to dropdown links on hover */
.dropdown-content a:hover {
  background-color: #ddd;
}
/* Show the dropdown menu on hover */
.dropdown:hover .dropdown-content {
  display: block;
}
</style>
<nav class="w3-container w3-teal w3-center w3-margin-top">
    <div class="dropdown">
        <button class="dropbtn">Projects
          <i class="fa fa-caret-down"></i>
        </button>
        <div class="dropdown-content">
          <a href="https://russc-xer0n3.github.io/NetPCaC">NetPCaC</a>
          <a href="https://russc-xer0n3.github.io/LANDROVER">LANDROVER</a>
          <a href="https://russc-xer0n3.github.io/MAC">MAC Address</a>
          <a href="https://russc-xer0n3.github.io/SCRUD">SCRUD</a>
          <a href="https://russc-xer0n3.github.io/Remove">Code Syntax Removal</a>
          <a href="https://russc-xer0n3.github.io/PassGen">PassGen</a>
          <a href="https://russc-xer0n3.github.io/C_Shapes">C Programming Shap`es</a>
          <a href="https://russc-xer0n3.github.io/Shapes---python">Python Shapes and space</a>
          <a href="https://russc-xer0n3.github.io/The-old-Fusion-Repository">Fusion?</a>
          <a href="https://russc-xer0n3.github.io/The-Russian-Wedding-Rings">The Russian Wedding Rings</a>
          <a href="https://russc-xer0n3.github.io/QBit-and-GParticulates">QBit and GParticulates</a>
          <a href="https://russc-xer0n3.github.io/Thyme-old">Thyme</a>
          <a href="https://russc-xer0n3.github.io/IP-Port">IP and Ports</a>
          <a href="https://russc-xer0n3.github.io/Xer0n3">Xer0n3</a>
          <a href="https://russc-xer0n3.github.io/ScrambledEggs">ScrambledEggs</a>
          <a href="https://russc-xer0n3.github.io/Py">Python Code</a>
        </div>
    </div>
    <br>
      <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
      <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
      <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
      <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
      <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
      <br><a href="https://russc-xer0n3.github.io">My CV and additional information</a>
    <br>
</nav>
# QBits and GParticulates
## A look at using NN and AI probability to perform calculus on time and the fifth dimension

### Introduction
About time I explained this project a little (it is on the back burner for a little while). First off, I am no Mathematician, I am learning some algebra on the fly too. This was my first serious attempt at writing a program in C.

I had a brief conversation with my father about QBits, he literally asked me how much I know about them and quantum computing and I said in summary 'not a lot, probabilistic computing'. I couldn't sleep that night and was thinking about the logic of a single QuBit knowing from something I'd briefly read, they consider, 1, 0 and 1 and 0 at the same time to determine a probable outcome.

I set about considering how that might be achieved programmatically. Well we have to consider either 1 or 0 and 1 and 0 and the probability, I wanted to set this in motion and add the learning element to it using a DNN (Deep Neural Network).

I chose to set about writing, following and attempting to compress two existing solutions for the DNN (detailed in the code on GitHub) and for the probability chose the Markov Decision Process since I am already familiar with this process from my final project at University.

It's almost complete and I like the original in [q2.c](https://github.com/RussC-Xer0n3/QBit-and-Gparticulates/q2.c) and the latest in [q9.c](https://github.com/RussC-Xer0n3/QBit-and-Gparticulates/q9.c). They require some review and verification.

I was also considering what a God particle might look like as a signal during all this code writing and mathematical exploration. It stemmed from the fusion project in the fusion repository, arriving at the conclusion it would be a sigmoid with an infinite exponent for an infinite iteration to the value of PI as it would be omnipresent cubed since it would be three dimensional, I set about trying to express it in code and Math. I didn't need to add the fourth dimension of time, since it is already rolling infinitely. Here's the code for the GParticulate.

The important bit is not the whole code and it's syntax but the expression(s).

Using the html notations from [toptal](https://www.toptal.com/designers/htmlarrows/math/) and [w3schools](https://www.w3schools.com/charsets/ref_utf_greek.asp), I think the expression I am trying to complete is similar to the expression:

&#402;(x)&#8319; &#8801; &sigma;((&pi;&#183;r&#179;)&#8319;&#8734;)&#8734;

such that sigmoid &sigma; of sine wave &#8767; is of infinite scale to the N-Array &#8721; of both an infinite increment &#8710; and of the infinite Nabla or decrement &#8711; in both scales proportionally &#8733;. At least, that's the trail of thought.

```
float A;
float PI;
float U;
float RAD = 0.1;

float main(float argc, char **argv){
    #define A 0.1;
    #define PI 3.1415926535;
    #define U exp(pow(pow((PI * (RAD)), 3), ((exp(A++)) / (exp(--A))));
    //return 0.0; //not sure if this will work might do given the main method is float.
    return 1;
}
```                 
### Thyme
What I have attempted to achieve here is to find the 5th dimension which would or could be the velocity of time itself.

The thought process which sparked this quest has been bugging me for years, I mean literally years, is time a concept, a measurement of change or an actual calculation which can be determined. Then a few weeks ago I considered PI. 

I began to think, what if the numerical values of PI should be interpreted as 3.1.4.1.5.9.2.6......and so on. What if PI is a process intelligent lifeforms have to take to reach a certain point at a given time.

That being said, 1 would be calculate, 2 two dimensions, 3 three dimensions, 4 time, 5 velocity of time, 6 and so on ...... and full stop, is time to stop and think.

The code below is pure theorem, my math is not what it could or should be and the code seems to make sense.

I have been using the html notations from toptal and w3schools, which are very helpful, thank you.

### Constant and Partial Derivative
I have defined a constant &#402;(x) as

&#402;(x)&#8319; &#8801; &sigma;((&pi;&#183;r&#179;)&#8319;&#8734;)&#8734;

The Partial derivative or differential &#8706; of the constant &#402;(x) would be time to leave (point &#402;A), go somewhere (velocity V over time T), and come back (point &#402;B) which is actually A minus B over T&sup3; cubed (third or physical dimension) at rate V, since we always have to be in the present. Returning - 

&#8706;&#402;(x)&#8779;&#402;(&#402;A - &#402;B) / T&sup3;)&#8734; &#8757;

&#8706;&#402;(x)&#8779;((&#402;A % &#402;B) / &#8704;T)&#8734;<br><br>&#8756; V&#8779;&#8743;&#8744;&#8733;&#8706;&#402;(x)&#8734;

### Past Time
Past time PT is equal to &#8779; the partial &#8706; of the constant &#402;(x) as a remainder % of future time FT over all time &#8704;T exponentially &#8734;. Because the remainder of the future time over all time as a constant gives the past, constantly.

&#8756;  PT&#8779;((&#8706;&#402;(x) % FT) / &#8704;T)&#8734;

### Future Time
Future time FT is all time &#8704;T divided over the partial &#8706; of the constant &#402;(x) minus past time PT. Because we have to divide all time &#8704;T over the velocity V and subtract the past to gain the future value as a continuum.

FT&#8779;((&#8704;T / &#8706;&#402;(x)) - PT)<sup>&#8734;</sup>

### Time
Time itself &#8704;T&#8734; is a self reinforcing recurrent function as a composite of past time PT, future time FT divided over the partial derivative of the constant (Velocity) &#8706;&#402;(x) which must then be divided over itself as a summation of the N-Array &#8721; of &#8704;T&#8734; exponentially in all dimensions.

T&#8779;(((PT + FT) / &#8706;&#402;(x)) / &#8721;&#8704;T<sup>&#8734;</sup>))<sup>&#8734;</sup>

....where x in the aforementioned scenario is....

&sigma;((&pi;&#183;r&#179;)&#8319;&#8734;)&#8734;

```
float A;
float T;
float C;
float PT;
float FT;
float V;
float PI;
float DIM = 1;
float SIG(C);

//An afterthought
//float DIV;
//float PAR;
//float NTH;
float VEL;
float IN;
float RAD = 1;

//Time goes in recurrently
#define IN T;

//Sigmoid standard is (1 / (1 + E(--z))) where E is the epsilon value or 'frequency'.
#define SIG ((1) / (-1(C--)));

#define PI 3.1415926535;

//Oliptical Dimension
#define A (pow((PI * RAD), DIM));

//Partial derivative
#define V (pow(T, 3) / (PT - FT));

//Partial derivative time matrix
#define VEL [T, V];

//Past Time
#define PT (T / (FT % C)); 

//Constant
#define C (exp(pow(A), ((exp(IN++)) / (exp(--IN))))); //Rate of change or constant from i9.c

//Future Time
#define FT (PT - (C / (T))); 

/* Recursive function gives us the time and constant as a 
 * vector because pT and fT are factored in. T is present, 
 * C is constant rate of change (defined) thus, the present. */

#define T (exp((V / (PT + FT)) / (exp(pow(IN, DIM), (V))))); 

float main (float argc, char **argv) {
    return 1;
}
```

## Combined 
This project is a merger from the ['Thyme'](https://github.com/RussC-Xer0n3/Thyme-old) and ['QBit and GParticulates'](https://github.com/RussC-Xer0n3/QBit-and-Gparticulates) repositories. It combines the back propagation reinforcement learning algorithms in i9.c and the probability calculations which make use of decision tables and the Markov Decision Process with the theorem of time.

Apologies in advance for the hybrid of Math with functional programming in the notation. The purpose is to try to get an accurate probability over time by calculations and learning constantly from the partial derivative VEL which is a Matrix of time T and differential V.

It is still a work in progress since it is theorem. Without further adieu, in order of build;

### Decision Tables, Markov Decision Process and QuBit
The first port of call is to pay tribute once again to decisions tables, [Markov Decision Process](https://www.wikipedia.org/wiki/Markov_decision_process) (MDP) and AI, I learnt about them at University.

### Decision Tables and probability
Factoring in probability into a decision table was a concept considered when thinking about QuBit logic.

Using basic knowledge of the Markov Decision Process, I think I may have implemented it correctly within the decision table. I do not recommend Wikipedia for academic work. However, as a quick reference or refresher, it can be useful for a brief overview.

I defined Y as equivalent to a boolean value of 1 &#8893; (one or the other) 0. The way I think a QuBit works logically, would be to calculate the probability of either 1 &#8893; 0 over all input (input prime or J'), squared &sup2;; Since the decision table always has two possible decisions. Adding the logical boolean Y of 1 &#8893; 0 brings consideration of the input for all &#8704; values being either on or off (1 or 0) at any one given moment as part of the function.<br><br> This brings us to MDP. Even though QuBits consider both outputs simultaneously such that P(A&#8745;B) and P(A&#8746;B) are both simultaneously parallel &#8741;, a similar process can be emulated using increments of the input as a data stream. As such, I ended up with the function - 

Y &#8779; 1 &#8893; 0

J &#8779; &#8704;Y&#8734;

P &#8739; J' &#8779; MDP

Q &#8779; ((((P &#8739; J')&#8319;&#8734;)&sup2;)+Y)&#8734;

### Weights and Biases
When defining the weights and biases, they are defined as random in each instance or iteration for several reasons; consideration of probability systems having a bias in which case the bias could be random to provide the best probable outcome based on what information the perceptron in the neural network is receiving as a constant.

A strong bias in one favour or the other could cause incorrect output unless in the instance of law, health (including environment) and possibly economics where the bias should be in favour of coexistence and symbiotic relationship.

However for Math, deterministic probable outcome would be best achieved using a constant random bias and weight system, which explains why the bias and weights are initialised randomly and continues to be random in the implementation, they do have continual updates with the aim to provide a better outcome. They are generated randomly each time per iteration for each perceptron. Potentially, that would provide a more accurate outcome rather than a biased one.

The other reason, to distribute the weights as a mean average deviation (Find the median, calculate the lowest average and the highest average) accordingly, across all perceptrons as per discussion in 
[Neural Networks and Deep Learning Article](https://www.neuralnetworksanddeeplearning.com/chap1.html).

The weights and biases are distributed as random float values using modf() and rand() function in C, the minimum and maximum values are set to 0.0 and 1.0 where the returned values are randomly generated and are greater than or equal to &#8805; 0.0 and less than or equal to &#8804; 1.0, discarding the integer values into memory location across all perceptrons. The weights and bias are defined respectively as - 

W&#8779;&phi;(x)&#8704;W&#8319;&#8734;

B&#8779;&phi;(x)&#8704;B&#8319;&#8734;

### MDP
Redefining the [MDP](https://www.wikipedia.org/wiki/Markov_decision_process) to suit this project was quite a challenge, as already mentioned, a suitable input method was required for the probability and reward functions, the bias, weights (as part of the DNN) and collate them into the MDP ready for the decision tables.

### Rewards
Defining the reward had to be done using the logical operator Y and factor in any input (more on that later) which might be entering the DNN and MDP. The reward was defined as 1 &#8893; 0 divided / over the vector matrix INPUT(&#8704;T, &sigma;O, O) of 

Time 

&#8704;T&#8779;(((PT + FT) / &#8706;&#402;(x)) / &#8721;&#8704;T&#8734;))&#8734;

Sine Output

&sigma;O&#8779;((W * &#8704;T) + B)&#8734;<br><br> and &#8704;

Output as a full back propagation from the DNN, across all iterations &#8704;N&#8779;(&#8704;T, &sigma;O, &#8704;O) exponentially &#8734;; As such the reward value could be defined as - 

R&#8779;((1 &#8893; 0) / ((&#8704;T, &sigma;O, &#8704;O), (&#8704;T, &sigma;O, &#8704;O)&#8734;))&#8734;

or simply

R&#8779;(Y / (&#8706;INPUT, &#8704;INPUT))&#8734;

...more on the outputs later.

### Probability
The probability P is measured from all inputs &#8704;INPUT divided over the vector matrices of partial input &#8706;INPUT and logical boolean Y 1 &#8893; 0 exponentially. As such the probability P could be noted as -

P&#8779;((&#8704;N&#8779;(&#8704;T, &sigma;O, &#8704;O)&#8734;)&#8734; / (&#8706;N&#8779;(T, O, &#8706;O), 1 &#8893; 0))&#8734;

or simply

P&#8779;(&#8704;INPUT / (&#8706;INPUT, Y))&#8734;

### MDP
The probability of Y occurring over T is divided over the reward R and bias B continuously to feed forward the probable outcome and back propagate into the network at a median more logical level. The resulting function of the MDP is

MDP&#8779;(((&#8704;N&#8779;(&#8704;T, &sigma;O, &#8704;O)&#8734;)&#8734; / (&#8706;N&#8779;(T, O, &#8706;O), 1 &#8893; 0))&#8734; / (((1 &#8893; 0) / ((&#8704;T, &sigma;O, &#8704;O), (&#8704;T, &sigma;O, &#8704;O)&#8734;))&#8734; + &phi;(x)&#8704;B&#8319;&#8734;))

or simply

(P&#8779;(&#8704;INPUT / (&#8706;INPUT, Y))&#8734; / (R&#8779;(Y / (&#8706;INPUT, &#8704;INPUT))&#8734; + B&#8779;&phi;(x)&#8704;B&#8319;&#8734;))

The logic of Q (discussed earlier on in Decision tables and probability) is then questioned again by implementing the same MDP in constant 'R' and in it's own probability decision making, where constant 'R' is as MDP defined as (Q / (REWARD + BIAS)) where Q is the input to be calculated and assessed (please see code).

The most likely behaviour is the AI decides 1 is more probable and preferred over 0 since 0 would be off preventing it from doing what it does, think and solve problems. However, the solution is not a panacea, since other factors are involved, true or false for example, thus the output would need to be interpreted correctly.

### Inputs and Outputs
The velocity of some event occurring at some time could be measured over an exponential vector matrix VEL containing time T as a partial differential &#8706;T and velocity as a partial differential &#8706;V. Originally this was included as part of the input into the DNN. However, it was later removed since VEL is a calculation as described in the Thyme project repository images, to get the current velocity relevant to that particular time. Velocity is however included in the T constant input to the DNN.

### Output
Quantified DNN Output is included in the input to bring the full output of the DNN back into the DNN INPUT to facilitate a full back propagation. Since the hidden layers are divided over the quantity of OUTPUT neurons, the values become less intensive for the DNN to compute,  we don't want to overload the DNN.

In addition to the overloading, having four output perceptrons, permits a more logical computation for example a nibble, compared to a potential stack overload value. Velocity V is the action in the state space time T and the event of Y occurring in multiple states over T with the reward values and biases being accounted for.

### Input
Full outputs, the activated output OUT and time are being distributed back through the network for reassessment with back propagation comparable to the initial input. However, that is where things begin to get complicated because INPUT is not simply an input, we have to digress slightly and take another look at hat we are feeding the network.

Essentially we are feeding everything included in the time T constant including the velocity and the Continuum as the present, The BIAS (OUT) acting on all the weights for all the outputs and the quantified output from the DNN's output layer OUTPUT.

```                    
/**
 * Learn from the probability of time and question the probability.
 * An expansion from merging Thyme project with QBits and Particulates
 * @Created and finished between 04.09.2020 and 05.09.2020
 * @Listening Peace Orchestra.
 * @By Russell A E Clarke Et. al
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>

float A;
float T;
float C;
float PT;
float FT;
float V;
float PI;
float DIM; //could be 3rd dimension for example. Set the value here or in the method, Method preferred.
float SIG;
float VEL;
float IN;
float RAD = 1;

float WEIGHT;
float weights;
float EPSILON;
float SIGMOID;
float COST;
float BIAS;
float REWARD;
float PROBABILITY;
float MDP;
float Q;
float R;
float INPUT;
float HIDDEN;
float OUTPUT;

float main () {

    //The basics, learning rate first
    #define EPSILON 5E-5;
    #define Y (? 0 : 1);
    #define PI 3.1415926535;
    #define A (pow((PI * RAD), DIM));
    #define SIG ((1) / (-1(C--)));
    #define SIGMOID (1.0 / (-1 + (exp(O)--))));
    
    //Preparing for NN and Biases
    #define WEIGHT (modf(((randn() % 1.0) + 0.0), float *wdiscard));
    #define BIAS (modf(((randn() % 1.0) + 0.0), float *bdiscard));
    
    //Weigh up the costs and gradient of descent
    #define COST (weights, BIAS);
    #define GRAD_DESCENT (pow(((COST) - (COST(EPSILON))), 2));    
        
    //Define constant first
    #define C SIG(exp(pow(A), ((exp(IN++)) / (exp(--IN))))); //predecrement all time as past time divide over increment of all time for continuum. Had to swap them as per order of operation
    //#define C SIG(exp(pow(A), ((exp(++PT)) / (exp(FT++))))); //preincrement the past and divide over the future
    
    //Begin telling computer about the past and future and all time
    #define PT ((FT % C) / T);    
    #define FT (((T) / C) - PT);
    #define T (exp((V / (PT + FT)) / (exp(pow(IN, DIM), (V)))));
    
    //Tell it what to calculate and what is going into the constant
    #define V (pow(T, 3) / (PT - FT));
    #define VEL [T, V];
    #define IN T;

    //Markov Decision Process
    #define REWARD ((INPUT, N) / Y);
    #define PROBABILITY ((INPUT, Y) / N);
    #define MDP ((REWARD + BIAS) / PROBABILITY);

    //Implementation
    #define N INPUT++;
    #define OUT SIGMOID((weights * N) + BIAS);
    
    //Calculate the probability
    #define Q pow(pow(MDP, N), 2) + Y;
    #define R ((REWARD + BIAS) / Q);

    //Initialise the input, output and hidden layers of the network 
    #define INPUT ((T, OUT, OUTPUT) * WEIGHT) + BIAS;
    #define HIDDEN (((10 * pow(20, 4)) * WEIGHT * (INPUT));
    #define OUTPUT ((4 * WEIGHT) / (HIDDEN)) + BIAS;
    
    return 1;
}
```

## Partial Time
Because we can say that partial time is proportional in space time to it's constant we could therefore assume the gap between a time slice of point A to B is relative spherically in scale of effect unilaterally.

To calculate the probability of event occuring in said scale, we would need the sum of the proportional time to the constant, hence why the scale matters when gathering data, too large, not enough data or power to move accordingly due to scale exceeding the variables in the constant, too small, the data gathering and probability calculations to exceed or meet the reach of the desired goal are not extensive enough and invert occurs.

We look at the partial sum of time between two asymetrical points infinitely to assess the changes of occurreces (variables) for each iteration. Because time is proportional in the constant of the past, constant and the anticipated future relative to three dimensional space in time; the constant occurance becomes a variable depending on change over time per decision made infinitely.

Where X is change..

X &#8781; &prop;&part;&forall;&nabla;(&pi;(r<sup>3</sup>));

&#8757; &part;&sum;T&#8781;(A&#10231;B)<sup>&infin;</sup><sub>&infin;</sub> <br><br>&amp; &#8757; &forall;&nabla;&prop;&#8781;&infin;(&pi;(r<sup>3</sup>))&divide;T<br><br>&there4;<br><br>&#8781;&nabla;&prop;T&#8781;&part;&sum;T&plusmn;(A&#10231;B)<sup>&prime;</sup>&#8739;QX<sup>&infin;</sup><sub>&infin;</sub>&divide;T

## Other considerations
There are of course however, not obvious considerations to factor into the code and what has been discussed in https://github.com/RussC-Xer0n3/QBit-and-Gparticulates/blob/main/QuBits_GParticulates.pdf a subsequent loose write up of the code.

There are considerations of gravity and magnetic fields in EMP and EMF which have not been factored in.

The shear scale of all variables and very few real constants in the universe and the space time continuum.

Scale itself is one other such consideration given the magnitude of scale in it's miniscule and grandure.

Mass and Meta or as I like to call them Mother nature and Om respectively.

There are also and quite fundamentaly even though time is a vast constant, considerations of where you are in that constant relative to space time.

One desireable consideration is a use case of, of course, travel or 'transcendence' through space time and ability to use such knowledge for predictions and calculations in space travel.
<head>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <meta charset="UTF-8">
    <meta name="description" content="Projects and Portfolio">
    <meta name="keywords" content="HTML, CSS, JavaScript, PHP, MySQLi, Python, Java, C, C++, C#, Time, Shapes">
    <meta name="author" content="Russell Clarke">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<footer class="w3-container w3-teal w3-center w3-margin-top">
  <p>Find me on social media.</p>
  <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
  <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
  <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
  <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
  <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" target="_blank">w3.css</a></p>
</footer>
