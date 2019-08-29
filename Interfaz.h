#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
#include "Hospital.h"

class Interfaz
{
    public:
        Interfaz();
        //~Interfaz();
        void correrInterfaz();

    private:
        void pacientes();
        void especialidades();
        void doctores();
        void pabellones();
        void camas();

        Hospital hosp = Hospital();
};
#endif