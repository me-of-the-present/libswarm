/*example.c
This is an example, where a swarm is used to find the local max
of a function
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"PSOCL.h"

int main(){
    swarm one = initswarm(NULL, 1,100,1);
    double *answer;
    double bound[2]={0,30};

    distributeparticles(one,bound);

    runswarm(100,one,fitness);

    answer=returnbest(one);


}

double fitness(double* input){
    return (intput[0])*(input[0]);
}