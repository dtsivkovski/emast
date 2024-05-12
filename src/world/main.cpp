#include "World.h"
#include "Vertex.h"

int main(int argc, char** argv) {
    World *w = new World;

    Vertex *a = new Vertex(0,3,5, 'a');
    Vertex *b = new Vertex(1,3,4, 'b');
    Vertex *c = new Vertex(4,2,1, 'c');

    w->insertVertex(a);
    w->insertVertex(b);
    w->insertVertex(c);

    w->printXZ();

    w->removeVertex(0,3,5);

    w->printXZ();

    delete w;
}