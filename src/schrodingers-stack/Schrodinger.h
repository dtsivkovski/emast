#ifndef SCHRODINGERS_STACK_H
#define SCHRODINGERS_STACK_H

#include <iostream>
#include <exception>
using namespace std;

template <class T>
class Schrodinger {
    public:
        Schrodinger();
        Schrodinger(int initialm_size);
        ~Schrodinger();

        // main functions
        void push(T val);
        T pop();
        T peek();

        // aux functions
        bool isEmpty();
        unsigned int size();


    private:
        void resize();

        T* arr;
        unsigned int m_size;
        unsigned int maxSize;

};

// IMPLEMENTATION BEGINS HERE

template <class T>
Schrodinger<T>::Schrodinger() {
    m_size = 0;
    maxSize = 8;
    arr = new T[maxSize];
    srand(time(NULL));
}

template <class T>
Schrodinger<T>::Schrodinger(int initialSize) {
    m_size = 0;
    maxSize = initialSize;
    arr = new T[maxSize];
    srand(time(NULL));
}

template <class T>
Schrodinger<T>::~Schrodinger() {
    delete[] arr;
}

template <class T>
void Schrodinger<T>::push(T val) {
    if (m_size == maxSize) { // resize array
        resize();
    }
    
    // push new value onto array
    arr[m_size++] = val;
}

template <class T>
T Schrodinger<T>::pop() {
    if (isEmpty()) throw runtime_error("Stack is empty");
    else {
        // generate random number
        bool result = rand() % 2;
        // schrodinger's random observation
        if (result) { // if not observed
            --m_size;
            throw runtime_error("Stack is empty");
        }
        else {
            return arr[--m_size]; // return actual item
        }
    }
}

template <class T>
T Schrodinger<T>::peek() {
    return pop(); // peek does the same as pop because observing it collapses the superposition
}

template <class T>
bool Schrodinger<T>::isEmpty() {
    return (m_size == 0);
}

template <class T>
unsigned int Schrodinger<T>::size() {
    return m_size;
}

template <class T>
void Schrodinger<T>::resize() {
    // change variable for maxsizes
    maxSize *= 2;
    
    // create temp array and copy
    T* temp = new T[maxSize];

    for (int i = 0; i < m_size; ++i) {
        temp[i] = arr[i];
    }

    delete[] arr;
    arr = temp;
}



#endif // SCHRODINGERS_STACK_H