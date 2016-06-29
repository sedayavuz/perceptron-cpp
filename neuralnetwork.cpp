#include <iostream>
#include <vector>
#include "neuralnetwork.h"
#include <time.h>
#include <stdlib.h>
using namespace std;

void NeuralNetwork::initWeights(){

int length = sizeof(inputs[0])/sizeof(*inputs[0]);


srand((unsigned)time(NULL));




  for (int i=0; i<length;i++){
   
    
  
 
  double r = ((double) rand() / (RAND_MAX)) ;
  weights.push_back(r); 
std::cout << "weight" << i << ":" << r << "\n";
}
}
NeuralNetwork::NeuralNetwork(){
} 
NeuralNetwork::NeuralNetwork(int **features, int *labels){
int length = (sizeof(features)/sizeof(*features))+1;
std::cout << length << "\n";
inputs = new int*[length];

for(int i=0;i<length;i++){
 for(int j=0;j<length; j++){

for (int l=0; l<length; l++){
 inputs[l] = new int[length];
}

inputs[i][j] = features[i][j];


}}
}

double  NeuralNetwork::summedInput(int inputNo){

double resultSum = 0;
int inputLength = (sizeof(inputs)/sizeof(*inputs))+1;
int inputElementLength = sizeof(inputs[0])/sizeof(*inputs[0]);


std::cout << inputLength << ":" << inputElementLength << "\n";

 for (int j=0; j<inputElementLength; j++){

std::cout << inputs[inputNo][j] << "*" << weights[j] <<  " ";

double mult = inputs[inputNo][j]*weights[j];
resultSum = resultSum+mult;
}

return resultSum;
}
  
 
