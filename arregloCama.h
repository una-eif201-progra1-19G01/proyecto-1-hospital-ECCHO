//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef HOSPITAL_ARREGLOCAMA_H
#define HOSPITAL_ARREGLOCAMA_H


#include "Cama.h"

class arregloCama {

private:

    int cantidad;
    int tamano;
    Cama **pCama;

public:

    arregloCama();

    virtual ~arregloCama();

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    Cama **getPCama() const;

    void setPCama(Cama **pCama);

    Cama* buscarCama(string codigo);

    string toString();

    void eliminarCama(Cama* pCam);

    void cambiarCama(string);

    string disponibilidad(); //ESTADO DE LAS CAMAS

    void agregarCamas(Cama*);

};


#endif //HOSPITAL_ARREGLOCAMA_H
