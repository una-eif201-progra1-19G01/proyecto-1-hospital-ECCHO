#include<string>
#include"Cama.h"
#include<iostream>
#include <sstream>

using namespace std;


Cama::Cama() {}


Cama::Cama(const string &codigo, bool estado, Paciente *ePaciente) : codigo(codigo), estado(estado),
                                                                     ePaciente(ePaciente) {}

Cama::~Cama() {
}


const string &Cama::getCodigo() const {
    return codigo;
}

bool Cama::isEstado() const {
    return estado;
}

Paciente *Cama::getEPaciente() const {
    return ePaciente;
}

void Cama::setCodigo(const string &codigo) {
    Cama::codigo = codigo;
}

void Cama::setEstado(bool estado) {
    Cama::estado = estado;
}

void Cama::setEPaciente(Paciente *ePaciente) {
    Cama::ePaciente = ePaciente;
}


string Cama::toString() {

    stringstream p;
    p << codigo << "\n";
    p << "ESTADO DE LA CAMA:  ";
    if (ePaciente != NULL) {
        estado = true;
    }
    if (estado == false) {

        p << "Disponible" << "\n";
    } else
        p << "Ocupado" << "\n";
        p << "Paciente:    "<<ePaciente->imprimirDatosPaciente()<<"\n";

    return p.str();
}

