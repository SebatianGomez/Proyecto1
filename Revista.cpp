//
// Created by sebas on 26/3/2025.
//

#include "Revista.h"

Revista::Revista(string nC, string nCat, string t, string a, string pC, string eM) : Material(nC, nCat, t, a, pC, eM) {}

Revista::~Revista() {}

string Revista::getNumeroClasificacion() const { return Material::getNumeroClasificacion(); }

void Revista::setNumeroClasificacion(string numeroClasificacion) { Material::setNumeroClasificacion(numeroClasificacion); }

string Revista::getNumeroCatalogo() const { return Material::getNumeroCatalogo(); }

void Revista::setNumeroCatalogo(string numeroCatalogo) { Material::setNumeroCatalogo(numeroCatalogo); }

string Revista::getTitulo() const { return Material::getTitulo(); }

void Revista::setTitulo(string titulo) { Material::setTitulo(titulo); }

string Revista::getAutor() const { return Material::getAutor(); }

void Revista::setAutor(string autor) { Material::setAutor(autor); }

string Revista::getPalabrasClave() const { return Material::getPalabrasClave(); }

void Revista::setPalabrasClave(string palabrasClave) { Material::setPalabrasClave(palabrasClave); }

string Revista::getEstadoMaterial() const { return Material::getEstadoMaterial(); }

void Revista::setEstadoMaterial(string estadoMaterial) { Material::setEstadoMaterial(estadoMaterial); }

string Revista::getTipoMaterial() const { return "Revista"; }

string Revista::mostrar() const {
    stringstream s;
    s << "--------- INFORMACION DE LA REVISTA ---------" << endl
      << "Tipo de material: " << getTipoMaterial() << endl
      << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl
      << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl
      << "Titulo: " << Material::getTitulo() << endl
      << "Autor: " << Material::getAutor() << endl
      << "Palabras clave: " << Material::getPalabrasClave() << endl
      << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}