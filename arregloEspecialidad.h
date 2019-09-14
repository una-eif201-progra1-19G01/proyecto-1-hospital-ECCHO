//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef HOSPITAL_ARREGLOESPECIALIDAD_H
#define HOSPITAL_ARREGLOESPECIALIDAD_H


#include "Especialidad.h"

class arregloEspecialidad {

private:

    Especialidad **pEspecialidad;
    int tamano;
    int cantidad;

public:

    arregloEspecialidad();

    virtual ~arregloEspecialidad();

    Especialidad **getPEspecialidad() const;

    void setPEspecialidad(Especialidad **pEspecialidad);

    int getTamano() const;

    void setTamano(int tamano);

    int getCantidad() const;

    void setCantidad(int cantidad);

    string toString();

    void agregarEspecialidad(Especialidad*);

    bool compararNombresDeEspecialidades(string);
};


#endif //HOSPITAL_ARREGLOESPECIALIDAD_H
