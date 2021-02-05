#include <stdlib.h>
#include <math.h>

void func(int* tab){
    tab[0] = 12;
    tab[4] = -100;
    tab[1] = 0;
}

int main(int argc, char* argv[]){
    int tab[] = {1,3,5,6,2,3,4,5,6};
    const size_t size = sizeof(tab) / sizeof(int);

    func(tab);

    double mean = 0.;
    for(size_t i = 0; i<size; i++){
        mean = 0.1*tab[i] + 0.9*mean;
    }

    for(int i = 0; i<1000; i++){
        double val = exp( tab[(i+3)%size] ) * pow(i,4);
    }
}