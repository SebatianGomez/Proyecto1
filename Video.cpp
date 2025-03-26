//
// Created by sebas on 26/3/2025.
//

#include "Video.h"

Video::Video(string nC, string nCat, string t, string a, string pC, string eM) : Material(nC, nCat, t, a, pC, eM) {}

Video::~Video() {}

string Video::getNumeroClasificacion() const { return Material::getNumeroClasificacion(); }

void Video::setNumeroClasificacion(string numeroClasificacion) { Material::setNumeroClasificacion(numeroClasificacion); }

string Video::getNumeroCatalogo() const { return Material::getNumeroCatalogo(); }

void Video::setNumeroCatalogo(string numeroCatalogo) { Material::setNumeroCatalogo(numeroCatalogo); }

string Video::getTitulo() const { return Material::getTitulo(); }

void Video::setTitulo(string titulo) { Material::setTitulo(titulo); }

string Video::getAutor() const { return Material::getAutor(); }

void Video::setAutor(string autor) { Material::setAutor(autor); }

string Video::getPalabrasClave() const { return Material::getPalabrasClave(); }

void Video::setPalabrasClave(string palabrasClave) { Material::setPalabrasClave(palabrasClave); }

string Video::getEstadoMaterial() const { return Material::getEstadoMaterial(); }

void Video::setEstadoMaterial(string estadoMaterial) { Material::setEstadoMaterial(estadoMaterial); }

string Video::getTipoMaterial() const { return "Video"; }

string Video::mostrar() const {
    stringstream s;
    s << "--------- INFORMACION DEL VIDEO ---------" << endl
      << "Tipo de material: " << getTipoMaterial() << endl
      << "Numero de clasificacion: " << Material::getNumeroClasificacion() << endl
      << "Numero de catalogo: " << Material::getNumeroCatalogo() << endl
      << "Titulo: " << Material::getTitulo() << endl
      << "Autor: " << Material::getAutor() << endl
      << "Palabras clave: " << Material::getPalabrasClave() << endl
      << "Estado del material: " << Material::getEstadoMaterial() << endl;
    return s.str();
}