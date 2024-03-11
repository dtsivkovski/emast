#ifndef BRAIN_H
#define BRAIN_H

#include "Genome.h"
#include <iostream>

namespace std {

class Brain {
    public:
        Brain(Genome g);
        ~Brain();

    private:
        Genome *genome; // stores pointer to genome
        void generateNeurons(); // generates all neurons based on the genome
};

} // namespace std

#endif // BRAIN_H