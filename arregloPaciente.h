//
// Created by Lady Asura III on 13/9/2019.
//
#include <iostream>
#include <sstream>
#include <string>

#ifndef HOSPITAL_ARREGLOPACIENTE_H
#define HOSPITAL_ARREGLOPACIENTE_H

#include "Paciente.h"
#include "Doctor.h"
class Doctor;
class Paciente;

using namespace std;

class arregloPaciente {

private:

    Paciente **pPaciente;
    int cantidad;
    int tamano;

public:
    arregloPaciente();

    virtual ~arregloPaciente();

    Paciente **getPPaciente() const;

    void setPPaciente(Paciente **pPaciente);

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    string toString();

    string imprimeDatosPaciente();

    Paciente *buscarPaciente(string);

    void agregaPacientes(Paciente*);

};


#endif //HOSPITAL_ARREGLOPACIENTE_H
