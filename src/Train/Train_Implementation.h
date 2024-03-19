#include <string>

template <typename T>
Train<T>::Train() {
    first = nullptr;
    caboose = nullptr;
    name = "Unnamed Train";
    numCarriages = 0;
    numElements = 0;
}

template <typename T>
Train<T>::~Train() {
    // iterate through all carriages and delete them
    Carriage<T> *current = first;
    while (current != nullptr) {
        Carriage<T> *temp = current;
        current = current->next;
        delete temp;
    }
}

template <typename T>
Train<T>::Train(string name) {
    first = nullptr;
    caboose = nullptr;
    this->name = name;
    numCarriages = 0;
    numElements = 0;
}

template <typename T>
string Train<T>::getFullManifest() {
    // iterate through all carriages and add their manifests to a string
    string manifest = " === Begin " + name + " Full Manifest ===\n";
    Carriage<T> *current = first;
    while (current != nullptr) {
        manifest += current->getManifest() + "\n";
        current = current->next;
    }
    manifest += " ===  End " + name + " Full Manifest  ===\n\n";
    return manifest;
}

template <typename T>
Carriage<T> Train<T>::seeFirst() {
    return *first;
}

template <typename T>
Carriage<T> Train<T>::seeCaboose() {
    return *caboose;
}

template <typename T>
void Train<T>::addCarriage(unsigned int size, string name) {
    // create a new carriage and add it to the train
    Carriage<T> *newCarriage = new Carriage<T>(size, name);
    if (first == nullptr) {
        // if the train is empty, set it as both first and caboose
        first = newCarriage;
        caboose = newCarriage;
    }
    else {
        // otherwise append to the end
        caboose->next = newCarriage;
        newCarriage->prev = caboose;
        caboose = newCarriage;
    }
    numCarriages++;
    numElements += size;
}

template <typename T>
Carriage<T> Train<T>::removeFirst() {
    // remove the first carriage and return it
    if (numCarriages == 0) {
        throw new out_of_range("No carriages to remove");
    }
    else if (numCarriages == 1) {
        // returns the first carriage, empty train results
        Carriage<T> *temp = first;
        first = nullptr;
        caboose = nullptr;
        numCarriages--;
        numElements -= temp->numInCarriage();
        return *temp;
    }
    else {
        // returns the first carriage, others are unaffected
        Carriage<T> *temp = first;
        first = first->next;
        first->prev = nullptr;
        numCarriages--;
        numElements -= temp->numInCarriage();
        return *temp;
    }
}

template <typename T>
Carriage<T> Train<T>::removeCaboose() {
    // remove the last carriage and return it
    if (numCarriages == 0) {
        throw new out_of_range("No carriages to remove");
    }
    else if (numCarriages == 1) {
        // returns the last carriage, empty train results
        Carriage<T> *temp = caboose;
        first = nullptr;
        caboose = nullptr;
        numCarriages--;
        numElements -= temp->numInCarriage();
        return *temp;
    }
    else {
        // returns the last carriage, others are unaffected
        Carriage<T> *temp = caboose;
        caboose = caboose->prev;
        caboose->next = nullptr;
        numCarriages--;
        numElements -= temp->numInCarriage();
        return *temp;
    }
}

template <typename T>
void Train<T>::insertToCarriage(unsigned int index, T data) {
    // insert data into the carriage at index
    if (first == nullptr) {
        throw new out_of_range("No carriages to insert into");
    }
    else if (index >= numCarriages) {
        throw new out_of_range("Index out of bounds");
    }
    else {
        Carriage<T> *current = first;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        current->add(data);
        numElements++;
    }
}

template <typename T>
void Train<T>::insertToCarriage(string carriageName, T data) {
    // insert data into the carriage with name carriageName
    if (first == nullptr) {
        throw new out_of_range("No carriages to insert into");
    }
    else {
        Carriage<T> *current = first;
        while (current != nullptr) {
            if (current->name == carriageName) {
                try {
                    current->add(data);
                    numElements++;
                    return;
                }
                catch (out_of_range e) {
                    throw new out_of_range("Carriage is full");
                }
            }
            current = current->next;
        }
        throw new out_of_range("Carriage not found");
    }
}