//
// Created by sebas on 26/3/2025.
//

#include "Articulo.h"

Articulo::Articulo(string nC, string nCat, string t, string a, string pC, string eM) : Material(nC, nCat, t, a, pC, eM) {}

Articulo::~Articulo() {}

string Articulo::getNumeroClasificacion() const { return Material::getNumeroClasificacion(); }

void Articulo::setNumeroClasificacion(string numeroClasificacion) { Material::setNumeroClasificacion(numeroClasificacion); }

string Articulo::getNumeroCatalogo() const { return Material::getNumeroCatalogo(); }

void Articulo::setNumeroCatalogo(string numeroCatalogo) { Material::setNumeroCatalogo(numeroCatalogo); }

string Articulo::getTitulo() const { return Material::getTitulo(); }

void Articulo::setTitulo(string titulo) { Material::setTitulo(titulo); }

string Articulo::getAutor() const { return Material::getAutor(); }

void Articulo::setAutor(string autor) { Material::setAutor(autor); }

string Articulo::getPalabrasClave() const { return Material::getPalabrasClave(); }

void Articulo::setPalabrasClave(string palabrasClave) { Material::setPalabrasClave(palabrasClave); }

string Articulo::getEstadoMaterial() const { return Material::getEstadoMaterial(); }

void Articulo::setEstadoMaterial(string estadoMaterial) { Material::setEstadoMaterial(estadoMaterial); }

string Articulo::getTipoMaterial() const { return "Articulo"; }

string Articulo::mostrar() const {
    stringstream s;
    s << "--------- INFORMACION DEL ARTICULO ---------" << endl;
    s << "Tipo de material: " << getTipoMaterial() << endl;
    s << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl;
    s << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl;
    s << "Titulo: " << Material::getTitulo() << endl;
    s << "Autor: " << Material::getAutor() << endl;
    s << "Palabras clave: " << Material::getPalabrasClave() << endl;
    s << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}
