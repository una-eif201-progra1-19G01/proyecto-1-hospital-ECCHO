//
// Created by Lady Asura III on 29/8/2019.
//

#include "Hospital.h"
#include <iostream>



using namespace std;

Hospital::Hospital() {

}

Hospital::Hospital(arregloPaciente *elPaciente, arregloCama *laCama, arregloDoctor *elDoctor,
                   arregloEspecialidad *laEspecialidad, arregloPabellon *elPabellon) : elPaciente(elPaciente),
                                                                                       laCama(laCama),
                                                                                       elDoctor(elDoctor),
                                                                                       laEspecialidad(laEspecialidad),
                                                                                       elPabellon(elPabellon) {
    elPaciente = new arregloPaciente();
    laCama = new arregloCama();
    elDoctor = new arregloDoctor();
    laEspecialidad = new arregloEspecialidad();
    elPabellon = new arregloPabellon();
}

Pabellon *Hospital::buscarPabellon(char iD, string genero) {
    return elPabellon->encuentraPabellon(iD,genero);
}

Doctor *Hospital::buscarDoctor(string buscaDoctor) {

    return elDoctor->buscarcarDoctor(buscaDoctor);
}

void Hospital::agregarPabellon(Pabellon * nuevoPabe) {
    elPabellon->agregarPabellones(nuevoPabe);

}

void Hospital::agregarDoctor(Doctor * nuevoDoctor) {
    elDoctor->agregarDoc(nuevoDoctor);

}

void Hospital::agregarEspecialidad(Especialidad *nuevaEspecial) {
    laEspecialidad->agregarEspecialidad(nuevaEspecial);

}

void Hospital::agregarPaciente(Paciente *nuevoPaciente) {
    elPaciente->agregaPacientes(nuevoPaciente);

}

void Hospital::eliminarDoctor(Doctor *adiosDoctor) {
    elDoctor->eliminarDoc(adiosDoctor);

}

void Hospital::eliminarCamas(Cama *adiosCama) {
    laCama->eliminarCama(adiosCama);

}

string Hospital::muestraPabellon() {

    return elPabellon->toString();
}

string Hospital::muestraDoctor() {
    return elDoctor->imprimirDatosDoctor();
}

string Hospital::muestraPaciente() {
    return elPaciente->toString();
}

string Hospital::mostrarEspecialidad() {
    return laEspecialidad->toString();
}

bool Hospital::compara(string comparaEstaEspecialidad) {
    return laEspecialidad->compararNombresDeEspecialidades(comparaEstaEspecialidad);
}

Cama *Hospital::buscarCama(string buscaEstaCama) {
    return laCama->buscarCama(buscaEstaCama);
}

void Hospital::cambiarCama(string cambiaEstaCama) {
    laCama->cambiarCama(cambiaEstaCama);

}

bool Hospital::agregarEspecialidadAlDoctor(Especialidad *especial) {

    return laEspecialidad->compararNombresDeEspecialidades(especial->getEspecialidad());
}

Hospital::~Hospital() {

    delete laCama;
    delete laEspecialidad;
    delete elPaciente;
    delete elDoctor;
    delete elPabellon;
}










