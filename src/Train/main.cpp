#include "Carriage.h"

int main(int argc, char** argv) {
    Carriage<int> *c = new Carriage<int>();
    c->printData();
    c->add(1);
    c->add(2);
    c->add(3);
    c->printData();
}