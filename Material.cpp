//
// Created by Peña on 26/3/2025.
//

#include "Material.h"

Material::Material(string nC, string nCat, string t, string a, string pC, string eM) : numeroClasificacion(nC), numeroCatalogo(nCat), titulo(t), autor(a), palabrasClave(pC), estadoMaterial(eM) {}

Material::~Material() {}

string Material::getNumeroClasificacion() const { return numeroClasificacion; }

void Material::setNumeroClasificacion(string numeroClasificacion) { this->numeroClasificacion = numeroClasificacion; }

string Material::getNumeroCatalogo() const { return numeroCatalogo; }

void Material::setNumeroCatalogo(string numeroCatalogo) { this->numeroCatalogo = numeroCatalogo; }

string Material::getTitulo() const { return titulo; }

void Material::setTitulo(string titulo) { this->titulo = titulo; }

string Material::getAutor() const { return autor; }

void Material::setAutor(string autor) { this->autor = autor; }

string Material::getPalabrasClave() const { return palabrasClave; }

void Material::setPalabrasClave(string palabrasClave) { this->palabrasClave = palabrasClave; }

string Material::getEstadoMaterial() const { return estadoMaterial; }

void Material::setEstadoMaterial(string estadoMaterial) { this->estadoMaterial = estadoMaterial; }

std::ostream & operator<<(std::ostream &os, const Material& obj) {
    os << obj.mostrar();
    return os;
}





