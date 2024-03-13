#ifndef EMPTYDIRECTIONNEURON_H
#define EMPTYDIRECTIONNEURON_H
#include "SensoryNeuron.h"
#include "World.h"
#include "Organism.h"

class EmptyDirectionNeuron : public SensoryNeuron {
    public:
        EmptyDirectionNeuron(char direction);

        float sense() {
            // get the location of the organism
            unsigned int x = organism->coordX;
            unsigned int y = organism->coordY;
            // get the world array
            char** map = world->map;
            // get the size of the world
            unsigned int xDim = world->getXDim();
            unsigned int yDim = world->getYDim();

            switch (direction) {
                case 'l':
                    // logic to determine if left is empty
                    if (x > 0) {
                        if (map[x-1][y] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                    break;
                case 'r':
                    // logic to determine if right is empty
                    if (x < xDim - 1) {
                        if (map[x+1][y] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                    break;
                case 'u':
                    // logic to determine if up is empty
                    if (y < yDim - 1) {
                        if (map[x][y+1] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    break;
                case 'd':
                    // logic to determine if down is empty
                    if (y > 0) {
                        if (map[x][y-1] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                    break;
            }
            return 0; // default return value
        }

    private:
        char direction;
};

#endif // EMPTYDIRECTIONNEURON_H