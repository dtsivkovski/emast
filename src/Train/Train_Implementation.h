
template <typename T>
void Train<T>::filterManifest(function<bool(T)> filter) {
    // iterate through all carriages and remove all elements that don't pass the filter
    Carriage<T> *current = train->getFirst();
    while (current != nullptr) {
        for (int i = 0; i < current->numInCarriage(); i++) {
            if (!filter(current->see(i))) {
                current->remove(i--); // removes the element and accounts for the array shift
            }
        }
        current = current->next;
    }
}

template <typename T>
string Train<T>::getFullManifest() {
    // iterate through all carriages and add their manifests to a string
    string manifest = " === Begin " + train->name + " Full Manifest ===\n";
    Carriage<T> *current = train->first;
    while (current != nullptr) {
        manifest += current->getManifest() + "\n";
        current = current->next;
    }
    manifest += " === End " + train->name + " Full Manifest ===\n\n";
    return manifest;
}