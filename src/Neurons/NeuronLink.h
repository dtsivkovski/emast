#ifndef NEURONLINK_H
#define NEURONLINK_H

#include "SensoryNeuron.h"
#include "MotorNeuron.h"

using namespace std;

class NeuronLink {
    public:
        NeuronLink(int size);
        ~NeuronLink();
        SensoryNeuron *sensoryNeuron;
        MotorNeuron *motorNeuron;

    private:
        float weight;
        void sendSignal();
};

#endif