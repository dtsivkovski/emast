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
        unordered_map<string, string> geneMap = {
            {"a", "move_left"},
            {"b", "move_up"},
            {"c", "move_right"},
            {"d", "move_down"}
        }
};


#endif