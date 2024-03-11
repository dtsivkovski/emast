#ifndef ORGANISM_H
#define ORGANISM_H

#include "Genome.h"
#include "Brain.h"
#include "Translator.h"

#include <iostream>
using namespace std;

class Organism {

    public:
        Organism();
        Organism(Genome g, double mutationChance); // overloaded const.
        ~Organism();
        Genome *genome;
        Brain *brain;
        Organism reproduce(); // creates a new organism but with slightly modified genome

    private:
        double mutationChance;

};


#endif