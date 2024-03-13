#ifndef SENSORYNEURON_H
#define SENSORYNEURON_H

#include "Organism.h"
#include "World.h"
#include <iostream>

using namespace std;

class SensoryNeuron {
    public:
        SensoryNeuron();
        SensoryNeuron(string type, Organism *neuronOwner, World *world);
        ~SensoryNeuron();
        float sense(); // outputs a float value based on what it senses, unique to each type

    protected:
        string type;
        Organism *organism;
        World *world;
};

#endif // SENSORYNEURON_H