#include "Carriage.h"
#include "Train.h"

int main(int argc, char** argv) {
    Train<int> *train = new Train<int>("Train 1");

    cout << train->getFullManifest() << endl;

    train->addCarriage(3, "First");
    train->addCarriage(3, "Second");
    train->addCarriage(3, "Third");

    train->insertToCarriage(0, 1);
    train->insertToCarriage("Second", 2);
    train->insertToCarriage(2, 3);

    cout << train->getFullManifest() << endl;

    delete train;
}