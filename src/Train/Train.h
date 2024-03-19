#ifndef TRAIN_H
#define TRAIN_H

#include "Carriage.h"

#include <iostream>
#include <string>
#include <functional>

template <typename T>
class Train {
    public:
        Train();
        Train(string name);
        ~Train();

        // TODO: Add carriage management functions
        Carriage<T> seeFirst();
        Carriage<T> seeCaboose();
        void addCarriage(unsigned int size, string name);
        Carriage<T> removeFirst();
        Carriage<T> removeCaboose();

        // TODO: Add conductor functions
        //! NOT WORKING: void filterManifest(function<bool(T)> filter);
        string getFullManifest();
        
        // working with carriages
        void insertToCarriage(unsigned int index, T data);
        void insertToCarriage(string carriageName, T data);

    private:
        Carriage<T> *first;
        Carriage<T> *caboose;
        string name;
        unsigned int numCarriages;
        unsigned int numElements;
        // TODO: Add private member variables

};

#include "Train_Implementation.h"

#endif // TRAIN_H