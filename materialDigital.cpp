//
// Created by sebas on 26/3/2025.
//

#include "materialDigital.h"

materialDigital::materialDigital(string nC, string nCat, string t, string a, string pC, string eM) : Material(nC, nCat, t, a, pC, eM) {}

materialDigital::~materialDigital() {}

string materialDigital::getNumeroClasificacion() const { return Material::getNumeroClasificacion(); }

void materialDigital::setNumeroClasificacion(string numeroClasificacion) { Material::setNumeroClasificacion(numeroClasificacion); }

string materialDigital::getNumeroCatalogo() const { return Material::getNumeroCatalogo(); }

void materialDigital::setNumeroCatalogo(string numeroCatalogo) { Material::setNumeroCatalogo(numeroCatalogo); }

string materialDigital::getTitulo() const { return Material::getTitulo(); }

void materialDigital::setTitulo(string titulo) { Material::setTitulo(titulo); }

string materialDigital::getAutor() const { return Material::getAutor(); }

void materialDigital::setAutor(string autor) { Material::setAutor(autor); }

string materialDigital::getPalabrasClave() const { return Material::getPalabrasClave(); }

void materialDigital::setPalabrasClave(string palabrasClave) { Material::setPalabrasClave(palabrasClave); }

string materialDigital::getEstadoMaterial() const { return Material::getEstadoMaterial(); }

void materialDigital::setEstadoMaterial(string estadoMaterial) { Material::setEstadoMaterial(estadoMaterial); }

string materialDigital::getTipoMaterial() const { return "Material Digital"; }

string materialDigital::mostrar() const {
    stringstream s;
    s << "--------- INFORMACION DEL MATERIAL DIGITAL ---------" << endl
      << "Tipo de material: " << getTipoMaterial() << endl
      << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl
      << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl
      << "Titulo: " << Material::getTitulo() << endl
      << "Autor: " << Material::getAutor() << endl
      << "Palabras clave: " << Material::getPalabrasClave() << endl
      << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}
