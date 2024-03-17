#include "SensoryNeuron.h"

SensoryNeuron::SensoryNeuron() {
    this->type = "default";
    this->organism = NULL;
    this->map = NULL;
}

// SensoryNeuron::SensoryNeuron(string type, Organism *neuronOwner, char** worldmap) {
//     this->type = type;
//     this->organism = neuronOwner;
//     this->map = worldmap;
// }

SensoryNeuron::~SensoryNeuron() {}

float SensoryNeuron::sense() {
    return 0;
}