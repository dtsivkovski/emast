#include "Vertex.h"

Vertex::Vertex() {
    x = 0;
    y = 0;
    z = 0;
    label = 'X';
}

Vertex::Vertex(int x, int y, int z, char label) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->label = label;
}

Vertex::~Vertex() {}