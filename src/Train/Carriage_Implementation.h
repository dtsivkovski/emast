template <typename T>
Carriage<T>::Carriage() {
    size = 3;
    data = new T[size];
    next = nullptr;
    prev = nullptr;
}

template <typename T>
Carriage<T>::Carriage(unsigned int size) {
    this->size = size;
    data = new T[size];
    next = nullptr;
    prev = nullptr;
}

template <typename T>
Carriage<T>::~Carriage() {
    next = nullptr;
    prev = nullptr;
    delete[] data;
}

template <typename T>
void Carriage<T>::add(T data) {
    if (inCarriage < size) {
        this->data[inCarriage++] = data;
    }
}

template <typename T>
void Carriage<T>::set(unsigned int index, T data) {
    if (index < size) {
        this->data[index] = data;
    }
    else {
        throw new out_of_range("Index out of bounds");
    }
}

template <typename T>
T Carriage<T>::see(unsigned int index) {
    if (index < size) {
        return data[index];
    }
    else {
        throw new out_of_range("Index out of bounds");
    }
}

template <typename T>
T Carriage<T>::remove(unsigned int index) {
    if (index < size && index < inCarriage) {
        T temp = data[index];
        for (int i = index; i < inCarriage; i++) {
            data[i] = data[i+1];
        }
        inCarriage--;
        return temp;
    }
    else {
        throw new out_of_range("Index out of bounds");
    }
}

template <typename T>
T* Carriage<T>::getAll() {
    return data;
}

template <typename T>
int Carriage<T>::getSize() {
    return size;
}

template <typename T>
void Carriage<T>::printData() {
    for (int i = 0; i < inCarriage; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

template <typename T>
unsigned int Carriage<T>::numInCarriage() {
    return inCarriage;
}

template <typename T>
bool Carriage<T>::isEmpty() {
    return inCarriage == 0;
}

template <typename T>
bool Carriage<T>::isFull() {
    return size == inCarriage;
}

