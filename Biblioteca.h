//
// Created by sebas on 26/3/2025.
//

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Usuario.h"
#include "Utilities.h"
#include "Material.h"
#include "Lista.h"

class Biblioteca {
private:
    Lista<Usuario*> usuarios;
    Lista<Material*> catalogo;
public:
    Biblioteca();
    ~Biblioteca();
    Lista<Material*> &obtenerCatalogo();
    Lista<Usuario*> &obtenerUsuarios();
    void agregarMaterial(Material* mat);
    void agregarUsuario(Usuario* usu);
    void cargarCatalogo();
    void cargarUsuarios();
    void guardarCatalogo();
    void guardarUsuarios();

};



#endif //BIBLIOTECA_H
