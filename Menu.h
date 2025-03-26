//
// Created by sebas on 26/3/2025.
//

#ifndef MENU_H
#define MENU_H
#include "Utilities.h"
#include "Usuario.h"
#include "Lista.cpp"
#include "Material.h"
#include "Libro.h"
#include "Revista.h"
#include "Articulo.h"
#include "Video.h"
#include "materialDigital.h"

class Menu {
public:
    void mostrarMenu();
    void incluirMateriales();
    void modificarMateriales();
    void incluirUsuarios();
    void modificarUsuarios();
    void RegistroPrestamos();
    void RegistroDevoluciones();
    void ReporteInventarioMaterial();
    void ReporteUsuario();
    void reporteMaterialPrestamosGeneral();
    void reporteMaterialPrestamosPorMaterial();
    void ReportePrestamosUsuarios();

    //void limpiarPantalla();
};



#endif //MENU_H
