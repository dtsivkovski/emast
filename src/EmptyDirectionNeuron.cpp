#include "EmptyDirectionNeuron.h"

EmptyDirectionNeuron::EmptyDirectionNeuron() {};

EmptyDirectionNeuron::EmptyDirectionNeuron(char direction, char** worldmap, Organism *organism) {
    this->direction = direction;
    this->worldmap = worldmap;
}

EmptyDirectionNeuron::~EmptyDirectionNeuron() {}

int EmptyDirectionNeuron::sense() {
            // get the location of the organism
            unsigned int x = organism->coordX;
            unsigned int y = organism->coordY;
            // get the world array
            char** map = worldmap; // TODO: World->map instead of map
            // get the size of the world
            unsigned int xDim = 10; // TODO: unsigned int xDim = world->getXDim();
            unsigned int yDim = 10; // TODO: unsigned int yDim = world->getYDim();

            switch (direction) {
                case 'l':
                    // logic to determine if left is empty
                    if (x > 0) {
                        if (map[x-1][y] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                case 'r':
                    // logic to determine if right is empty
                    if (x < xDim - 1) {
                        if (map[x+1][y] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                case 'u':
                    // logic to determine if up is empty
                    if (y < yDim - 1) {
                        if (map[x][y+1] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                case 'd':
                    // logic to determine if down is empty
                    if (y > 0) {
                        if (map[x][y-1] == ' ') {
                            return 1; // if empty space and not at boundary
                        }
                    }
                    return 0;
                default:
                    return 0;
            }
            return 0; // default return value
        }
