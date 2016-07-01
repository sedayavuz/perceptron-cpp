#include <iostream>
#include "neuralnetwork.h"
#include <vector>
int main(){
  
  


  int **inputs_array = new int*[2];
  int labels[2] = {0,1};

  for (int i=0; i<2; i++){

    inputs_array[i] = new int[2];}

  inputs_array[0][0] = 0;
  inputs_array[0][1] = 0;
  
  inputs_array[1][0] = 0;
  inputs_array[1][1] = 1;

  NeuralNetwork test (inputs_array, labels);
 test.initWeights();

test.appliedThreshold();
}
