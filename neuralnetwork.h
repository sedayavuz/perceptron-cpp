#ifndef NEURALNETWORK_
#include <vector>
class NeuralNetwork{
   public:
    NeuralNetwork();
    NeuralNetwork(int **features ,int *labels);

     void initWeights();
     double summedInput(int inputNo);
     int appliedThereshold();
     void weightupdate();
     private:
   
     std::vector<double> weights;
     int **inputs;
     double thereshold = 0.50;
};
#endif
