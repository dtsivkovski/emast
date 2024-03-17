#ifndef EMPTYDIRECTIONNEURON_H
#define EMPTYDIRECTIONNEURON_H
#include "SensoryNeuron.h"

class EmptyDirectionNeuron : public SensoryNeuron {
    public:
        EmptyDirectionNeuron();
        EmptyDirectionNeuron(char direction, char** worldmap, Organism *organism);
        ~EmptyDirectionNeuron();

        int sense(); 
    private:
        char direction;
        char** worldmap;
        Organism *organism;
};

#endif // EMPTYDIRECTIONNEURON_H