//Xer0n3

#include <math.h>
#include <stdio.h>

const float c = 8.000; // bits corners
const float h = 16.000; // bits half of l
const float l = 32.000; // sum of h * 2 length between 2c

void gatebitsc(c){
    pow(c, 4); // 4096 bits
    return c;
}

void geth(h){
    h = 12*(cos(60));
    return h;
}

void getl(l){
    l = (c, h) - ((2 * c), (10 * h));
    return l;
}

void getpsum(p){
    const float p = sum(c, h, l);
    return p;
}

void getcubic(p){
    const float cubic = pow(p, 3);
    return cubic;
}

void getx(c, h, l, p){
    const float x = (c%p) == ((c,l) - p);
    return x;
}

void getcor(x){
    float cor = (x = cos(60));
    return cor;
}

/*I'll have a think on proc, perhas some sockets*/
void proc (c, p, cor, x) {

    for (int i = 0; i <= p; i++){
        if  (!keyboardInterrupt()){
            const cor;
        } else {
            keyboardInterrupt();
            c += (-x, -p, -c);
        }
        return;
    }
    return;
}