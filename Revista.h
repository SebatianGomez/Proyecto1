//
// Created by Peña on 26/3/2025.
//

#ifndef REVISTA_H
#define REVISTA_H

#include "Material.h"
#include "Utilities.h"

class Revista : public Material {
public:
    Revista(string nC, string nCat, string t, string a, string pC, string eM);
    virtual ~Revista();
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



#endif //REVISTA_H