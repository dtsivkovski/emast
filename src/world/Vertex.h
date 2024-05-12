#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
using namespace std;

class Vertex {
    
    public:
        Vertex();
        Vertex(int x, int y, int z, char label);
        ~Vertex();
        char label;
        int x;
        int y;
        int z;

    private:

};

#endif // VERTEX_H