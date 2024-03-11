#ifndef BRAIN_H
#define BRAIN_H

#include "Genome.h"
#include <iostream>

using namespace std;

class Brain {
    public:
        Brain(Genome g);
        ~Brain();

    private:
        Genome *genome; // stores pointer to genome
        void generateNeurons(); // generates all neurons based on the genome
};

#endif // BRAIN_H