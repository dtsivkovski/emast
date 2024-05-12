#ifndef WORLD_H
#define WORLD_H

#include "Vertex.h"

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class World {
    public:
        World(); 
        ~World(); 
        void insertVertex(Vertex *v);
        bool removeVertex(int x, int y, int z);
        bool removeVertex(int index);
        // print statements
        void printXZ();
        // void printXY(); // TODO
        // void printYZ(); // TODO

    private:
        vector<Vertex*> vertices;
        int minX;
        int minY;
        int minZ;
        int maxX;
        int maxY;
        int maxZ;

};

#endif // WORLD_H