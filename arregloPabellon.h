//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef HOSPITAL_ARREGLOPABELLON_H
#define HOSPITAL_ARREGLOPABELLON_H

#include "arregloCama.h"
#include "Pabellon.h"

class arregloPabellon {

private:
    int cantidad;
    int tamano;
    Pabellon **pPabellon;

public:

    arregloPabellon();

    virtual ~arregloPabellon();

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    Pabellon **getPPabellon() const;

    void setPPabellon(Pabellon **pPabellon);

    Pabellon *encuentraPabellon(char, string);

    string toString();

    string verEstadoDeLasCamas();

    void agregarPabellones(Pabellon*);

};


#endif //HOSPITAL_ARREGLOPABELLON_H
