#ifndef WORLD_H
#define WORLD_H

#include <iostream>;
#include "Organism.h";
using namespace std;

class World {

    public:
        // const. / destr.
        World();
        World(
            unsigned int orgCount,
            unsigned int xDimension,
            unsigned int yDimension
            );
        ~World();

        Organism* civilization;
        // accessors for variables
        unsigned int getOrgCount();
        unsigned int getXDim();
        unsigned int getYDim();
        bool isEmpty(unsigned int xCoord, unsigned int yCoord);
        void printMap();
        char** map; // map of positions (0 is empty, x is occupied)
        //! FIXME: Figure out how the selection system fits into the world
        //! does everyone not in selection get culled? or is it prioritized, but resources are given to some non-successful individuals?
        /* 
            methods to interact with the world
        */
        // move time forward
        void tickOnce(); // to iterate time one tick
        void tick(unsigned int ticks); // to iterate time forward a specific number of ticks
        // generation values
        void genForward(); // to move time forward one whole generation
        void cull(); // culls the generation based on specified "natural selection"
        //! TODO: void setSelection(Selection ns);
    private:
        void generateCiv();
        unsigned int orgCount;
        unsigned int xDimension;
        unsigned int yDimension;
};

#endif