//
// Created by sebas on 25/3/2025.
//

#ifndef LIBRO_H
#define LIBRO_H

#include "Utilities.h"
#include "Material.h"

class Libro : public Material {
public:
    Libro(string nC, string nCat, string t, string a, string pC, string eM);
    virtual ~Libro();
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
    string getTipoMaterial() const;
    virtual string mostrar() const;
};



#endif //LIBRO_H
