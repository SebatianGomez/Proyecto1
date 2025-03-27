//
// Created by sebas on 26/3/2025.
//

#ifndef ADMINISTRADORALMACENAMIENTO_H
#define ADMINISTRADORALMACENAMIENTO_H

#include "Biblioteca.h"
#include "Material.h"
#include "Usuario.h"
#include "Utilities.h"

class AdministradorAlmacenamiento {
public:
    static void cargarCatalogo(Biblioteca& biblioteca);
    static void cargarUsuarios(Biblioteca& biblioteca);
    static void guardarCatalogo(Lista<Material*>& catalogo);
    static void guardarUsuarios(Lista<Usuario*>& usuarios);
private:
    static Material* pasarLinea(const string& linea);
};



#endif //ADMINISTRADORALMACENAMIENTO_H
