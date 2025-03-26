//
// Created by sebas on 25/3/2025.
//

#ifndef USUARIO_H
#define USUARIO_H

#include "Utilities.h"

class Usuario {
private:
    string id;
    string nombre;
    string apellido1;
    string apellido2;
    bool estado;
public:
    Usuario(string i = "-", string n = "-", string ap = "-", bool estado = "-");
    ~Usuario();
    string getId() const;
    void setId(string id);
    string getNombre() const;
    void setNombre(string nombre);
    string getApellido1() const;
    void setApellido1(string apellido1);
    string getApellido2() const;
    void setApellido2(string apellido2);
    bool getEstado() const;
    void setEstado(bool estado);
    string toString();
    friend std::ostream & operator<<(std::ostream &os, const Usuario &obj) {
        return os
               << "Id: " << obj.getId()
               << ", nombre: " << obj.getNombre()
               << ", apellido1: " << obj.getApellido1()
               << ", apellido2: " << obj.getApellido2()
               << ", estado: " << obj.getEstado();
    }
};



#endif //USUARIO_H
