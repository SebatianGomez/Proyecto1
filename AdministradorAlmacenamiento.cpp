//
// Created by sebas on 26/3/2025.
//

#include "AdministradorAlmacenamiento.h"

Material* AdministradorAlmacenamiento::pasarLinea(const string& linea) {
    stringstream ss(linea);
    string tipo, numCla, numCat, titulo, autor, palabrasClave, estadoMaterial;

    getline(ss, tipo, ';');
    getline(ss, numCla, ';');
    getline(ss, numCat, ';');
    getline(ss, titulo, ';');
    getline(ss, autor, ';');
    getline(ss, palabrasClave, ';');
    getline(ss, estadoMaterial, ';');

    if (tipo == "Libro") {
        return new Libro(numCla, numCat, titulo, autor, palabrasClave, estadoMaterial);
    }
    else if (tipo == "Revista") {
        return new Revista(numCla, numCat, titulo, autor, palabrasClave, estadoMaterial);
    }
    else if (tipo == "Articulo") {
        return new Articulo(numCla, numCat, titulo, autor, palabrasClave, estadoMaterial);
    }
    else if (tipo == "Video") {
        return new Video(numCla, numCat, titulo, autor, palabrasClave, estadoMaterial);
    }
    else if (tipo == "MaterialDigital") {
        return new materialDigital(numCla, numCat, titulo, autor, palabrasClave, estadoMaterial);
    }
    return nullptr;
}