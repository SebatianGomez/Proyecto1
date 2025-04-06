//
// Created by sebas on 26/3/2025.
//

#include "AdministradorAlmacenamiento.h"

Lista<Material>* AdministradorAlmacenamiento::cargarCatalogo() {
    salidaCatalogo.open("catalogo.txt");
    Lista<Material>* catalogo = new Lista<Material>();
    string linea;
    if (!salidaCatalogo.is_open()) {
        cout << "No se pudo abrir el archivo catalogo.txt" << endl;
    }
    while (getline(salidaCatalogo, linea)) {
        Material* material = pasarLinea(linea);
        if (material) {
            catalogo->insertarFinal(material);
        }
    }
    salidaCatalogo.close();
    return catalogo;
}

void AdministradorAlmacenamiento::guardarCatalogo(const Lista<Material>* catalogo) {
    entradaCatalogo.open("catalogo.txt", ios::app);
    if (!entradaCatalogo.is_open()) {
        cout << "No se pudo abrir el archivo catalogo.txt para escribir" << endl;
        return;
    }
    Nodo<Material>* aux = catalogo->primero1();
    while (aux != nullptr) {
        Material* mat = aux->getDato();
        if (mat->getTipoMaterial() == "Libro") {
            Libro* libro = dynamic_cast<Libro*>(mat);
            entradaCatalogo << libro;
        }
        else if (mat->getTipoMaterial() == "Revista") {
            Revista* revista = dynamic_cast<Revista*>(mat);
            entradaCatalogo << revista;
        }
        else if (mat->getTipoMaterial() == "Articulo") {
            Articulo* articulo = dynamic_cast<Articulo*>(mat);
            entradaCatalogo << articulo;
        }
        else if (mat->getTipoMaterial() == "Video") {
            Video* video = dynamic_cast<Video*>(mat);
            entradaCatalogo << video;
        }
        else if (mat->getTipoMaterial() == "materialDigital") {
            materialDigital* materialDig = dynamic_cast<materialDigital*>(mat);
            entradaCatalogo << materialDig;
        }
        aux = aux->getSiguiente();
    }
    entradaCatalogo.close();
}

Lista<Usuario>* AdministradorAlmacenamiento::cargarUsuarios() {
    salidaUsuarios.open("usuarios.txt");
    Lista<Usuario>* usuarios = new Lista<Usuario>();
    string linea, id, nombre, apellido1, apellido2;
    bool estado;
    if (!salidaUsuarios.is_open()) {
        cout << "No se pudo abrir el archivo usuarios.txt" << endl;
    }
    while (getline(salidaUsuarios, linea)) {
        stringstream ss(linea);
        getline(ss, id, ';');
        getline(ss, nombre, ';');
        getline(ss, apellido1, ';');
        getline(ss, apellido2, ';');
        ss >> estado;
        Usuario* usuario = new Usuario(id, nombre, apellido1, apellido2, estado);
        if (usuario) {
            usuarios->insertarFinal(usuario);
        }
    }
    salidaUsuarios.close();
    return usuarios;
}

void AdministradorAlmacenamiento::guardarUsuarios(const Lista<Usuario>* usuarios) {
    entradaUsuarios.open("usuarios.txt", ios::app);
    if (!entradaUsuarios.is_open()) {
        cout << "No se pudo abrir el archivo usuarios.txt para escribir" << endl;
        return;
    }
    Nodo<Usuario>* aux = usuarios->primero1();
    while (aux != nullptr) {
        Usuario* usuario = aux->getDato();
        entradaUsuarios << usuario;
        aux = aux->getSiguiente();
    }
    entradaUsuarios.close();
}

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