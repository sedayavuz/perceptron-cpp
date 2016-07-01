#ifndef NEURALNETWORK_
#include <vector>
class NeuralNetwork{
   public:
    NeuralNetwork();
    NeuralNetwork(int **features ,int *labels);

     void initWeights();
     double summedInput(int inputNo);
     int appliedThreshold();
     void weightupdate(int weightNo, int desiredOutput, int resultWeFind);
     private:
   
     std::vector<double> weights;
     int **inputs;
     const double threshold = 0.50;
     double learningRate = 0.15;
     int *labels;
};
#endif
