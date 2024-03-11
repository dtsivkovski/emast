#ifndef WORLD_H
#define WORLD_H

class World {

    public:
        World();
        World(
            unsigned int orgCount,
            unsigned int xDimension,
            unsigned int yDimension
            );
        //! TODO: Organism[] civilization;
        // accessors for variables
        unsigned int getOrgCount();
        unsigned int getXDim();
        unsigned int getYDim();
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
        unsigned int orgCount;
        unsigned int xDimension;
        unsigned int yDimension;
};

#endif