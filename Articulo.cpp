//
// Created by Peña on 26/3/2025.
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
    s << "--------- INFORMACION DEL ARTICULO ---------" << endl
      << "Tipo de material: " << getTipoMaterial() << endl
      << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl
      << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl
      << "Titulo: " << Material::getTitulo() << endl
      << "Autor: " << Material::getAutor() << endl
      << "Palabras clave: " << Material::getPalabrasClave() << endl
      << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}