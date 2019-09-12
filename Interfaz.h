#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
#include "Hospital.h"
#include "Pabellon.h"

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
        // Pabellon pab = Pabellon();
        // Pabellon *pPabellon;
};
#endif