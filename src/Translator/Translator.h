#ifndef TRANSLATOR_H
#define TRANSLATOR_H


#include <iostream>
#include <unordered_map>
#include <exception>
#include <string>
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
        Translator();
        ~Translator();
        string translate(string genestr);
        void translateGene(string genestr);

    private:
        unordered_map<char, NEURON_TYPE> sensingNeuronsTypes = {
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
            {'J', 'x'},
            {'K', 'y'},
            {'L', 'x'},
            {'M', 'y'},
            {'N', 'r'},
            {'O', 'o'}
        };
};


#endif