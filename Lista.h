//
// Created by sebas on 21/3/2025.
//

#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "Utilities.h"

template<class T>
class Lista {
private:
    Nodo<T>* primero;
public:
    Lista();
    ~Lista();
    Nodo<T>* primero1() const;
    void insertarInicio(T* dato);
    void insertarFinal(T* dato);
    string mostrar();
    friend std::ostream & operator<<(std::ostream &os, const Lista &obj) {
        Nodo<T> *aux = obj.primero;
        if (aux->getSiguiente() == nullptr) {
            os << "Lista vacia!" << endl;
        } else {
            aux = aux->getSiguiente();
            do {
                os << *aux->getDato() << endl;
                os << "-->" << endl;
                aux = aux->getSiguiente();
            } while (aux != nullptr);
            os << "NULL" << endl;
        }
        return os;
    }

};



#endif //LISTA_H
