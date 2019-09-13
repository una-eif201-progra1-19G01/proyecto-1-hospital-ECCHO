#include<string>
#include"Cama.h"
#include<sstream>
#include<iostream>

using namespace std;


Cama::Cama() {}

Cama::Cama(int cantidad, int tamano, Cama **pCama) : cantidad(cantidad), tamano(tamano), pCama(pCama) {
    tamano = 0;
    pCama = new Cama *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano; i++) {
        pCama[i] = NULL;
    }
}


Cama::Cama(const string &codigo, bool estado, Paciente *ePaciente) : codigo(codigo), estado(estado),
                                                                     ePaciente(ePaciente) {}

Cama::~Cama() {
    delete[] pCama;
}

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

void Cama::agregar(Cama *pCam) {
    pCama[cantidad++] = pCam;
}

Cama *Cama::buscarCama(string codigo) {
    for (int cam = 0; cam < cantidad; cam++)
        if ((pCama[cam]->getCodigo() == codigo) && !pCama[cam]->isEstado())
            return pCama[cam];
}

void Cama::eliminarCama(Cama *pCam) {

    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->getCodigo() == pCam->getCodigo()) {
            for (int z = 1; z < cantidad; z++) {
                pCama[z] = pCama[z + 1];
            }
            cantidad--;
            break;
        }
    }
}


void Cama::cambiarCama(string codex) {

    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->getCodigo() == codex && pCama[i]->isEstado() == false) {
            pCama[i]->setEstado(true);
        }
    }
}


string Cama::toStringCama() {
    stringstream c;
    c << "Cama por Codigo: \n";
    for (int cama = 0; cama < cantidad; cama++) {
        c << "Codigo: ";
        c << pCama[cama]->toStringCama();
    }
    return c.str();
}

string Cama::disponibilidad() {

    stringstream z;
    z << "CAMAS DISPONIBLES: ";
    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->isEstado() == false) {
            z << pCama[i]->toStringCama();
        }

    }
    z << "CAMAS OCUPADAS:  ";
    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->isEstado() == true) {
            z << pCama[i]->toStringCama();
        }
    }
    return z.str();
}

string Cama::toString() { //TERMINAR!!!!!!!!!

    stringstream p;
    p << codigo << "\n";
    p << "ESTADO DE LA CAMA:  ";
    if (ePaciente != NULL) {
        estado = true;
    }
    if (estado = false) {

        p << "Disponible" << "\n";
    } else
        p << "Ocupado" << "\n";
    p << "Paciente:    ";

    return std::__cxx11::string();
}

