#ifndef NEURON_H
#define NEURON_H

#include <iostream>

using namespace std;

class Neuron {
    public:
        Neuron();
        Neuron(string type);
        ~Neuron();
    
    private:
        string type;
};

#endif // NEURON_H