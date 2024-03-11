#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Brain.h"
#include "Neuron.h"

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
            // movement neurons
            {'A', "move_left"}, // char value 65
            {'B', "move_up"},
            {'C', "move_right"},
            {'D', "move_down"},
            {'E', "move_random"},
            // sensing neurons
            {'F', "empty_right"},
            {'G', "empty_left"},
            {'H', "empty_up"},
            {'I', "empty_down"},
            // sensing for boundaries
            {'J', "at_boundary_right"},
            {'K', "at_boundary_left"},
            {'L', "at_boundary_up"},
            {'M', "at_boundary_down"}
        };
};


#endif