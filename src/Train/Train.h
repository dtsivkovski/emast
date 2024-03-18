#ifndef TRAIN_H
#define TRAIN_H

#include "Conductor.h"
#include "Carriage.h"

#include <iostream>
#include <string>
#include <functional>

template <typename T>
class Train {
    public:
        Train();
        ~Train();

        // TODO: Add carriage management functions
        Carriage<T> getFirst();
        Carriage<T> getCaboose();
        void addCarriage(unsigned int size, string name);
        void removeFirst();
        void removeCaboose();

        // TODO: Add conductor functions
        void filterManifest(function<bool(T)> filter);

    private:
        Conductor<T> *conductor;
        Carriage<T> *first;
        Carriage<T> *caboose;
        string name;
        unsigned int numCarriages;
        unsigned int numElements;
        // TODO: Add private member variables

};

#include "Train_Implementation.h"

#endif // TRAIN_H