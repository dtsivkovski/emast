#ifndef MOTORNEURON_H
#define MOTORNEURON_H

#include <iostream>

using namespace std;

class MotorNeuron {
    public:
        MotorNeuron();
        MotorNeuron(string type);
        ~MotorNeuron();
        void actIfFired(float signal); // takes in a float signal and acts based on it, unique to each type

    private:
        string type;
};

#endif // MOTORNEURON_H