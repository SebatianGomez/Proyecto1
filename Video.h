//
// Created by sebas on 26/3/2025.
//

#ifndef VIDEO_H
#define VIDEO_H

#include "Material.h"
#include "Utilities.h"

class Video : public Material {
public:
    Video(string nC, string nCat, string t, string a, string pC, string eM);
    ~Video();
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



#endif //VIDEO_H
