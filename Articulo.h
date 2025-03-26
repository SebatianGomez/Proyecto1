//
// Created by sebas on 26/3/2025.
//

#ifndef ARTICULO_H
#define ARTICULO_H

#include "Material.h"
#include "Utilities.h"

class Articulo : public Material {
public:
    Articulo(string nC, string nCat, string t, string a, string pC, string eM);
    virtual ~Articulo();
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
    string getTipoMaterial() const;
    virtual string mostrar() const override;

};



#endif //ARTICULO_H
