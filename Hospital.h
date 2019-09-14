//
// Created by Lady Asura III on 29/8/2019.
//

#ifndef HOSPITAL_HOSPITAL_H
#define HOSPITAL_HOSPITAL_H

#include <cstdint>
#include <string>
#include <iostream>
#include <sstream>
#include "arregloCama.h"
#include "arregloPaciente.h"
#include "arregloDoctor.h"
#include "arregloPabellon.h"
#include "arregloEspecialidad.h"

using namespace std;

class Hospital {

private:
    arregloPaciente* elPaciente;
    arregloCama* laCama;
    arregloDoctor* elDoctor;
    arregloEspecialidad* laEspecialidad;
    arregloPabellon* elPabellon;

public:
    Hospital();

    Hospital(arregloPaciente *elPaciente, arregloCama *laCama, arregloDoctor *elDoctor,
             arregloEspecialidad *laEspecialidad, arregloPabellon *elPabellon);

    Pabellon *buscarPabellon(char, string);
    Doctor *buscarDoctor(string);
    void agregarPabellon(Pabellon*);
    void agregarDoctor(Doctor*);
    void agregarEspecialidad(Especialidad*);
    void agregarPaciente(Paciente*);
    void eliminarDoctor(Doctor*);
    void eliminarCamas(Cama*);
    string muestraPabellon();
    string muestraDoctor();
    string muestraPaciente();
    string mostrarEspecialidad();
    bool compara(string);
    Cama*buscarCama(string);
    void cambiarCama(string);
    bool agregarEspecialidadAlDoctor(Especialidad*);


    virtual ~Hospital();

};


#endif //HOSPITAL_HOSPITAL_H
