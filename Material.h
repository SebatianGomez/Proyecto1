//
// Created by sebas on 25/3/2025.
//

#ifndef MATERIAL_H
#define MATERIAL_H

#include <ostream>

#include "Utilities.h"

class Material {
private:
    string numeroClasificacion;
    string numeroCatalogo;
    string titulo;
    string autor;
    string palabrasClave;
    string estadoMaterial;
public:
    Material(string nC = "-", string nCat = "-", string t = "-", string a = "-", string pC = "-", string eM = "-");
    ~Material();
    string getNumeroClasificacion() const;
    void setNumeroClasificacion(string numeroClasificacion);
    string getNumeroCatalogo() const;
    void setNumeroCatalogo(string numeroCatalogo);
    string getTitulo() const;
    void setTitulo(string titulo);
    string getAutor() const;
    void setAutor(string autor);
    string getPalabrasClave() const;
    void setPalabrasClave(string palabrasClave);
    string getEstadoMaterial() const;
    void setEstadoMaterial(string estadoMaterial);
    virtual string mostrar() = 0;
    friend std::ostream & operator<<(std::ostream &os, const Material &obj);
};



#endif //MATERIAL_H
