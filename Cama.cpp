#include<string>
#include"Cama.h"

using namespace std;


Cama::Cama() {}

Cama::Cama(int cantidad, int tamano, Cama** pCama) : cantidad(cantidad), tamano(tamano), pCama(pCama) {
	tamano = 0;
	pCama = new Cama * [tamano];
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

void Cama::agregar(Cama* pCam) {
	pCama[cantidad++] = pCam;
}

Cama* Cama::buscarCama(string codigo) {
	for (int cam = 0; cam < cantidad; cam++) {
		if ((pCama[cam]->getCodigo() == codigo) && (pCama[cam]->getEstado() == false)) {
			return pCama[cam];
		}
	}
}


