#include "World.h"

World::World() {
    minX = INT_MAX;
    minY = INT_MAX;
    minZ = INT_MAX;
    maxX = INT_MIN;
    maxY = INT_MIN;
    maxZ = INT_MIN;
}

World::~World() {
    // delete all vertices
    for (int i = 0; i < vertices.size(); ++i) {
        Vertex *current = vertices.back(); // gets rid of element
        vertices.pop_back();
        delete current;
    }
}

void World::insertVertex(Vertex *v) {
    vertices.push_back(v);
    // update min and max values
    if (v->x < minX) {
        minX = v->x;
    }
    if (v->x > maxX) {
        maxX = v->x;
    }
    if (v->y < minY) {
        minY = v->y;
    }
    if (v->y > maxY) {
        maxY = v->y;
    }
    if (v->z < minZ) {
        minZ = v->z;
    }
    if (v->z > maxZ) {
        maxZ = v->z;
    }
}

bool World::removeVertex(int x, int y, int z) {
    for (int i = 0; i < vertices.size(); ++i) {
        Vertex *current = vertices.at(i);
        if (current->x == x && current->y == y && current->z == z) {
            vertices.erase(vertices.begin() + i);
            delete current;
            return true;
        }
    }
    return false; // if not found
}

bool World::removeVertex(int index) {
    // check bounds and erase
    if (index >= 0 && index < vertices.size()) {
        Vertex *current = vertices.at(index);
        vertices.erase(vertices.begin() + index);
        delete current;
        return true;
    }
    return false; // if index out of bounds
}

void World::printXZ() { // prints the world visually in a 2D form showing the X-Z axes
    // TODO: Make more efficient by not requiring vertex iteration
    cout << "Z" << endl;

    for (int i = maxZ; i >= minZ; --i) {
        cout << "|";
        for (int j = minX; j <= maxX; ++j) {

            bool vertexExists = false;

            // inefficient vertex iteration
            for (int k = 0; k < vertices.size(); ++k) {
                Vertex *current = vertices.at(k);
                if (current->x == j & current->z == i) {
                    cout << current->label;
                    vertexExists = true;
                    break;
                }
            }

            if (!vertexExists) {
                cout << " ";
            }

        }
        cout << endl;
    }

    // print lower header
    cout << " ";
    for (int j = minX; j <= maxX; ++j) {
        cout << "-";
    }
    cout << "X" << endl;

}