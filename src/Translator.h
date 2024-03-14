#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Brain.h"
#include "Neurons/SensoryNeuron.h"
#include "Neurons/MotorNeuron.h"
#include "Neurons/NeuronLink.h"
#include "Neurons/EmptyDirectionNeuron.h"

#include <iostream>
#include <unordered_map>
using namespace std;

enum class NEURON_TYPE {
    EMPTYDIR,
    DISTANCE,
    AGE,
    LOCATION,
    LASTMOVEMENT,
    RANDOM,
    OSCILLATING
};

class Translator {

    public:
        Brain translateGenome(string genome);

    private:
        void translateGene(string genestr);
        int stringToWeight(string weightstr);
        unordered_map<char, NEURON_TYPE, char> sensingNeuronsTypes = {
            // sensing neurons
            {'A', NEURON_TYPE::EMPTYDIR},
            {'B', NEURON_TYPE::EMPTYDIR},
            {'C', NEURON_TYPE::EMPTYDIR},
            {'D', NEURON_TYPE::EMPTYDIR},
            // distance from wall neurons
            {'E', NEURON_TYPE::DISTANCE},
            {'F', NEURON_TYPE::DISTANCE},
            {'G', NEURON_TYPE::DISTANCE},
            {'H', NEURON_TYPE::DISTANCE},
            // {'E', "distance_east"},
            // {'F', "distance_west"},
            // {'G', "distance_north"},
            // {'H', "distance_south"},
            // age neuron
            {'I', NEURON_TYPE::AGE},
            // location neurons
            {'J', NEURON_TYPE::LOCATION},
            {'K', NEURON_TYPE::LOCATION},
            // last movement neurons
            {'L', NEURON_TYPE::LASTMOVEMENT},
            {'M', NEURON_TYPE::LASTMOVEMENT},
            // random neuron
            {'N', NEURON_TYPE::RANDOM},
            // oscillating neuron
            {'O', NEURON_TYPE::OSCILLATING}
        };
        unordered_map<char, char> sensingNeuronsChars {
            {'A', 'u'},
            {'B', 'd'},
            {'C', 'l'},
            {'D', 'r'},
            {'E', 'e'},
            {'F', 'w'},
            {'G', 'n'},
            {'H', 's'},
            {'I', 'a'},
        };
};


#endif