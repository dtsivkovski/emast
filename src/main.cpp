#include <iostream>
#include "EmptyDirectionNeuron.h"

using namespace std;

int main(int argc, char** argv) {

    cout << "begin" << endl;

    Organism *o = new Organism();
    o->coordX = 5;
    o->coordY = 5;

    char** map = new char*[10];
    EmptyDirectionNeuron *n = new EmptyDirectionNeuron('l', map, o);
    for (int i = 0; i < 10; i++) {
        map[i] = new char[10];
        for (int j = 0; j < 10; j++) {
            map[i][j] = ' ';
            if (j == 3) {
                map[i][j] = 'X';
            }
        }
    }

    cout << "sense: " << n->sense() << endl;
    o->coordY = 4; 
    cout << "sense: " << n->sense() << endl;

    for (int i = 0; i < 10; i++) {
        delete[] map[i];
    }

    delete[] map;
    delete o;
    delete n;

    return 0; 
}