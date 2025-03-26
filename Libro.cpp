//
// Created by Peña on 26/3/2025.
//

#include "Libro.h"

Libro::Libro(string nC, string nCat, string t, string a, string pC, string eM) : Material(nC, nCat, t, a, pC, eM) {}

Libro::~Libro() {}

string Libro::getNumeroClasificacion() const { return Material::getNumeroClasificacion(); }

void Libro::setNumeroClasificacion(string numeroClasificacion) { Material::setNumeroClasificacion(numeroClasificacion); }

string Libro::getNumeroCatalogo() const { return Material::getNumeroCatalogo(); }

void Libro::setNumeroCatalogo(string numeroCatalogo) { Material::setNumeroCatalogo(numeroCatalogo); }

string Libro::getTitulo() const { return Material::getTitulo(); }

void Libro::setTitulo(string titulo) { Material::setTitulo(titulo); }

string Libro::getAutor() const { return Material::getAutor(); }

void Libro::setAutor(string autor) { Material::setAutor(autor); }

string Libro::getPalabrasClave() const { return Material::getPalabrasClave(); }

void Libro::setPalabrasClave(string palabrasClave) { Material::setPalabrasClave(palabrasClave); }

string Libro::getEstadoMaterial() const { return Material::getEstadoMaterial(); }

void Libro::setEstadoMaterial(string estadoMaterial) { Material::setEstadoMaterial(estadoMaterial); }

string Libro::getTipoMaterial() const { return "Libro"; }

string Libro::mostrar() const {
    stringstream s;
    s << "--------- INFORMACION DEL LIBRO ---------" << endl
      << "Tipo de material: " << getTipoMaterial() << endl
      << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl
      << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl
      << "Titulo: " << Material::getTitulo() << endl
      << "Autor: " << Material::getAutor() << endl
      << "Palabras clave: " << Material::getPalabrasClave() << endl
      << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}