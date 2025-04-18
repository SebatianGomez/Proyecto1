//
// Created by sebas on 21/3/2025.
//

#include "Lista.h"

template<class T>
Lista<T>::Lista() {
    primero = new Nodo<T>;
}

template<class T>
Lista<T>::~Lista() {
    Nodo<T> *temp;
    Nodo<T> *anterior;
    if (primero->getSiguiente() == nullptr) {
        delete primero;
    } else {
        while (primero->getSiguiente() != nullptr) {
            temp = primero;
            while (temp->getSiguiente() != nullptr) {
                anterior = temp;
                temp = temp->getSiguiente();
            }
            anterior->setSiguiente(nullptr);
            delete temp;
        }
    }
}

template<class T>
Nodo<T> * Lista<T>::primero1() const {
    return primero;
}

template<class T>
void Lista<T>::insertarInicio(T *dato) {
    Nodo<T>* nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(primero->getSiguiente());
    primero->setSiguiente(nuevo);
}

template<class T>
void Lista<T>::insertarFinal(T *dato) {
    Nodo<T>* nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    if (primero == nullptr) {
        primero = nuevo;
    }
    Nodo<T>* actual = primero;
    while (actual->getSiguiente() != nullptr) {
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(nuevo);
}

template<class T>
string Lista<T>::mostrar() {
    stringstream ss;
    Nodo<T>* actual = primero;
    while (actual != nullptr) {
        ss << actual->getDato()->toString() << endl;
        actual = actual->siguiente;
    }
    return ss.str();
}