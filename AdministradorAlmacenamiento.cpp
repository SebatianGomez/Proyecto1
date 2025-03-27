//
// Created by sebas on 26/3/2025.
//

#include "AdministradorAlmacenamiento.h"

void AdministradorAlmacenamiento::cargarCatalogo(Biblioteca& biblioteca) {
    ifstream archivo("catalogo.txt");
    string linea;
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo catalogo.txt" << endl;
        return;
    }
    while (getline(archivo, linea)) {
        Material* material = pasarLinea(linea);
        if (material) {
            biblioteca.agregarMaterial(material);
        }
    }
    archivo.close();
}

void AdministradorAlmacenamiento::guardarCatalogo(Lista<Material*>& catalogo) {
    ofstream archivo("catalogo.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo catalogo.txt para escribir" << endl;
        return;
    }
    Nodo<Material*>* aux = catalogo.primero1();
    while (aux != nullptr) {
        Material* mat = aux->getDato();
        if (mat->getTipoMaterial() == "Libro") {
            Libro* libro = dynamic_cast<Libro*>(mat);
            archivo << libro;
        }
        else if (mat->getTipoMaterial() == "Revista") {
            Revista* revista = dynamic_cast<Revista*>(mat);
            archivo << revista;
        }
        else if (mat->getTipoMaterial() == "Articulo") {
            Articulo* articulo = dynamic_cast<Articulo*>(mat);
            archivo << articulo;
        }
        else if (mat->getTipoMaterial() == "Video") {
            Video* video = dynamic_cast<Video*>(mat);
            archivo << video;
        }
        else if (mat->getTipoMaterial() == "materialDigital") {
            materialDigital* materialDig = dynamic_cast<materialDigital*>(mat);
            archivo << materialDig;
        }
        aux = aux->getSiguiente();
    }
    archivo.close();
}

void AdministradorAlmacenamiento::cargarUsuarios(Biblioteca &biblioteca) {
    ifstream archivo("usuarios.txt");
    string linea, id, nombre, apellido1, apellido2;
    bool estado;
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo usuarios.txt" << endl;
    }
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        getline(ss, id, ';');
        getline(ss, nombre, ';');
        getline(ss, apellido1, ';');
        getline(ss, apellido2, ';');
        ss >> estado;
        Usuario* usuario = new Usuario(id, nombre, apellido1, apellido2, estado);
        if (usuario) {
            biblioteca.agregarUsuario(usuario);
        }
    }
    archivo.close();
}

void AdministradorAlmacenamiento::guardarUsuarios(Lista<Usuario*>& usuarios) {
    ofstream archivo("usuarios.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo usuarios.txt para escribir" << endl;
        return;
    }
    Nodo<Usuario*>* aux = usuarios.primero1();
    while (aux != nullptr) {
        Usuario* usuario = aux->getDato();
        archivo << usuario;
        aux = aux->getSiguiente();
    }
    archivo.close();
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