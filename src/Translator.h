#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Brain.h"
#include "Neurons/Neuron.h"

#include <iostream>
#include <unordered_map>
using namespace std;

class Translator {

    public:
        Brain translateGenome(string genome);

    private:
        void translateGene(string genestr);
        int stringToWeight(string weightstr);
        unordered_map<char, string> geneMap = {
            // sensing neurons
            {'A', "empty_right"},
            {'B', "empty_left"},
            {'C', "empty_up"},
            {'D', "empty_down"},
            // distance from wall neurons
            {'E', "distance_east"},
            {'F', "distance_west"},
            {'G', "distance_north"},
            {'H', "distance_south"},
            // age neuron
            {'I', "age"},
            // last movement neuron
            {'J', "last_movement_X"},
            {'K', "last_movement_Y"},
            // location neurons
            {'L', "location_X"},
            {'M', "location_Y"},
            // random neuron
            {'N', "random"},
            // oscillating neuron
            {'O', "oscillating"}
        };
};


#endif