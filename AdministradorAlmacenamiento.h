//
// Created by sebas on 26/3/2025.
//

#ifndef ADMINISTRADORALMACENAMIENTO_H
#define ADMINISTRADORALMACENAMIENTO_H

#include "Biblioteca.h"
#include "Material.h"
#include "Usuario.h"
#include "Utilities.h"
#include "Articulo.h"
#include "Revista.h"
#include "Libro.h"
#include "Video.h"
#include "materialDigital.h"
#include "Lista.h"

class AdministradorAlmacenamiento {
private:
    ifstream salidaUsuarios;
    ifstream salidaCatalogo;
    ofstream entradaCatalogo;
    ofstream entradaUsuarios;
public:
    Lista<Material>* cargarCatalogo();
    Lista<Usuario>* cargarUsuarios();
    void guardarCatalogo(const Lista<Material>* catalogo);
    void guardarUsuarios(const Lista<Usuario>* usuarios);
    Material* pasarLinea(const string& linea);
};



#endif //ADMINISTRADORALMACENAMIENTO_H
