//
// Created by Lady Asura III on 13/9/2019.
//

#include <sstream>
#include "arregloPaciente.h"

arregloPaciente::arregloPaciente() : cantidad(0), tamano(200), pPaciente(new Paciente*[200]) {
    for(int i=0;i<10;i++){
        pPaciente[i]=NULL;}
}

arregloPaciente::~arregloPaciente() {

    for (int i = 0; i < cantidad; i++) {
        delete pPaciente[i];
    }
    delete[]pPaciente;
}

Paciente **arregloPaciente::getPPaciente() const {
    return pPaciente;
}

void arregloPaciente::setPPaciente(Paciente **pPaciente) {
    arregloPaciente::pPaciente = pPaciente;
}

int arregloPaciente::getCantidad() const {
    return cantidad;
}

void arregloPaciente::setCantidad(int cantidad) {
    arregloPaciente::cantidad = cantidad;
}

int arregloPaciente::getTamano() const {
    return tamano;
}

void arregloPaciente::setTamano(int tamano) {
    arregloPaciente::tamano = tamano;
}

string arregloPaciente::toString() {

    stringstream j;
    for (int i = 0; i < cantidad; i++) {

        j << pPaciente[i]->imprimirDatosPaciente();
    }
    return j.str();
}

string arregloPaciente::imprimeDatosPaciente() {

    stringstream l;
    for (int i = 0; i < cantidad; i++){
        l<<"los datos del paciente son los siguientes:   ";
        l<<pPaciente[i]->tostring();
    }
    return l.str();
}

Paciente *arregloPaciente::buscarPaciente(string numCedula) {

    for (int i = 0; i < cantidad; i++){
        if(pPaciente[i]->getCedula()==numCedula)
            return pPaciente[i];
    }
}

void arregloPaciente::agregaPacientes(Paciente *otroPaciente) {

    if(cantidad<tamano){
        pPaciente[cantidad++]=otroPaciente;
    }
}
