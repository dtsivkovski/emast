#include "Organism.h"

Organism::Organism() {
    this->coordX = 0;
    this->coordY = 0;
    this->age = 0;
}

Organism::~Organism() {
    //! delete genome;
    //! delete brain;
}

void Organism::move(unsigned int x, unsigned int y) {
    this->coordX = x;
    this->coordY = y;
}

Organism Organism::reproduce() {
    //! Genome g = genome->mutate(mutationChance);
    //! Organism o(g, mutationChance);
    //! return o;
    Organism o;
    return o;
}

