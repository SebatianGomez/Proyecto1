//
// Created by sebas on 25/3/2025.
//

#include "Usuario.h"

Usuario::Usuario(string i, string n, string ap, string ap2, bool estado) : id(i), nombre(n), apellido1(ap), apellido2(ap2), estado(estado) {}

Usuario::~Usuario() {}

string Usuario::getId() const { return id; }

void Usuario::setId(string id) { this->id = id; }

string Usuario::getNombre() const { return nombre; }

void Usuario::setNombre(string nombre) { this->nombre = nombre; }

string Usuario::getApellido1() const { return apellido1; }

void Usuario::setApellido1(string apellido1) { this->apellido1 = apellido1; }

string Usuario::getApellido2() const { return apellido2; }

void Usuario::setApellido2(string apellido2) { this->apellido2 = apellido2; }

bool Usuario::getEstado() const { return estado; }

void Usuario::setEstado(bool estado) { this->estado = estado; }

string Usuario::toString() {
    stringstream s;
    cout << "--------- INFORMACION DEL USUARIO ---------" << endl;
    s << "ID: " << id << endl;
    s << "Nombre: " << nombre << endl;
    s << "Apellido1: " << apellido1 << endl;
    s << "Apellido2: " << apellido2 << endl;
    s << "Estado: " << estado << endl;
    return s.str();
}

string Usuario::mostrarEspecifico() {
    stringstream s;
    s << getId() << ";" << getNombre() << ";" << getApellido1() << ";" << getApellido2() << ";" << getEstado() << endl;
    return s.str();
}