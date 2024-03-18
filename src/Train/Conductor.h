#ifndef CONDUCTOR_H
#define CONDUCTOR_H

#include <iostream>
#include <string>
#include <functional>
#include "Train.h"

template <typename T>
class Conductor {
    private:
        Train *train;

    public:
        Conductor(Train *train);
        ~Conductor();
};


#endif // CONDUCTOR_H