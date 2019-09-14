//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef HOSPITAL_ARREGLODOCTOR_H
#define HOSPITAL_ARREGLODOCTOR_H

#include "Doctor.h"

class arregloDoctor {

private:
    Doctor **pDoctor;
    int cantidad;
    int tamano;

public:
    arregloDoctor();

    virtual ~arregloDoctor();

    bool agregarDoc(Doctor *);

    void eliminarDoc(Doctor *);

    Doctor * buscarcarDoctor(string);

    string imprimirDatosDoctor();


};


#endif //HOSPITAL_ARREGLODOCTOR_H
