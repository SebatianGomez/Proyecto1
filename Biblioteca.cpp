//
// Created by sebas on 26/3/2025.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca() {
    catalogo = *(new Lista<Material*>());
    usuarios = *(new Lista<Usuario*>());
}

Biblioteca::~Biblioteca() {
    delete &catalogo;
    delete &usuarios;
}

Lista<Material*> &Biblioteca::obtenerCatalogo() {
    return catalogo;
}

Lista<Usuario*> &Biblioteca::obtenerUsuarios() {
    return usuarios;
}

void Biblioteca::agregarMaterial(Material* mat) {
    catalogo.insertarFinal(&mat);
}

void Biblioteca::agregarUsuario(Usuario* usu) {
    usuarios.insertarFinal(&usu);
}

void Biblioteca::cargarCatalogo() {
    AdministradorAlmacenamiento::cargarCatalogo(this);
}

void Biblioteca::cargarUsuarios() {
    AdministradorAlmacenamiento::cargarUsuarios(this);
}

void Biblioteca::guardarCatalogo() {
    AdministradorAlmacenamiento::guardarCatalogo(catalogo);
}

void Biblioteca::guardarUsuarios() {
    AdministradorAlmacenamiento::guardarUsuarios(usuarios);
}