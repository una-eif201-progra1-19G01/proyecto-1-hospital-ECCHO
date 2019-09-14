#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
#include "Hospital.h"
#include "Pabellon.h"
#include "Cama.h"

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

        arregloPabellon arrPab = arregloPabellon();
        arregloCama arrCam = arregloCama();
        arregloPaciente arrPac = arregloPaciente();
        arregloEspecialidad arrEsp = arregloEspecialidad();
        arregloPaciente arrPas = arregloPaciente();
        arregloDoctor arrDoc = arregloDoctor();
};
#endif