#include<iostream>
#include<string>
#include<sstream>
#include"Cama.h"

using ::std::string;

<<<<<<< HEAD
Cama::Cama() {
    setCodigo(" ");
    setEstado("");
}
=======
Cama::Cama() {}

Cama::Cama(int cantidad, int tamano, Cama **pCama) : cantidad(cantidad), tamano(tamano), pCama(pCama) {}
>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423

Cama::Cama(const string &codigo, bool estado, Paciente *ePaciente) : codigo(codigo), estado(estado),
                                                                     ePaciente(ePaciente) {}

Cama::~Cama() {}

int Cama::getCantidad() const {
    return cantidad;
}

int Cama::getTamano() const {
    return tamano;
}

Cama **Cama::getPCama() const {
    return pCama;
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

void Cama::setCantidad(int cantidad) {
    Cama::cantidad = cantidad;
}

void Cama::setTamano(int tamano) {
    Cama::tamano = tamano;
}

void Cama::setPCama(Cama **pCama) {
    Cama::pCama = pCama;
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

