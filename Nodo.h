//
// Created by sebas on 21/3/2025.
//

#ifndef NODO_H
#define NODO_H

#include "Utilities.h"
#include "Usuario.h"

template<class T>
class Nodo {
private:
    T* dato;
    Nodo* siguiente;
public:
    Nodo() : dato(nullptr), siguiente(nullptr) {}

    ~Nodo() {
        delete dato;
        delete siguiente;
    }

    T* getDato() const {
        return dato;
    }

    void setDato(T* dato) {
        this->dato = dato;
    }

    Nodo<T>* getSiguiente() const {
        return siguiente;
    }

    void setSiguiente(Nodo<T>* siguiente) {
        this->siguiente = siguiente;
    }
};



#endif //NODO_H
