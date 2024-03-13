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
    AGE
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
            {'I', NEURON_TYPE::AGE}
            // {'I', "age"},
            // last movement neuron
            // {'J', "last_movement_X"},
            // {'K', "last_movement_Y"},
            // location neurons
            // {'L', "location_X"},
            // {'M', "location_Y"},
            // random neuron
            // {'N', "random"},
            // oscillating neuron
            // {'O', "oscillating"}
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