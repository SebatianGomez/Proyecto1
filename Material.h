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
    virtual ~Material();
    virtual string getNumeroClasificacion() const;
    void setNumeroClasificacion(string numeroClasificacion);
    virtual string getNumeroCatalogo() const;
    void setNumeroCatalogo(string numeroCatalogo);
    virtual string getTitulo() const;
    void setTitulo(string titulo);
    virtual string getAutor() const;
    void setAutor(string autor);
    virtual string getPalabrasClave() const;
    void setPalabrasClave(string palabrasClave);
    virtual string getEstadoMaterial() const;
    void setEstadoMaterial(string estadoMaterial);
    virtual string getTipoMaterial() const = 0;
    virtual string mostrar() const = 0;
    friend std::ostream & operator<<(std::ostream &os, const Material &obj);
};



#endif //MATERIAL_H
