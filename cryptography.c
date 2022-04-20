/*Russell A E Clarke*/
/*take the partial derivatives (are these partial derivatives? side note: I'm just starting out with algebra and quadratics) of the square root of the sum of sig' and sig for each iteration including 0 and divide by the vector variables of interation and cost greater than 0 to get the partial derivative for 1 and or 0 per iteration in the sigmoid gradients*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

float y;
float sigmoid;
float sigmoidPrime;
float cost;
float partial;
float derivative;

#define y = (1 ?: 0); /*defined in q2.c but resetting to boolean 1 or 0*/
#define sig = sqrt(sigmoid+sigmoidPrime); /*not sure about this one but reads square root of sig' and sig because there are 2 functions to compute*/
#define cost = cost; /*defined in source q2.c - already pushed to the hardware*/
#define partial = (sig(z++)/sig(z));
#define derivative = (y((partial(y, cost)/(sig(y), sig(0)))) => 0); /*take the partial derivatives*/

float main (float *argv){
    return 0;
}
