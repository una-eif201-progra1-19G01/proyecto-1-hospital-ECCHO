#include<string>
#include"Especialidad.h"
#include<sstream>
#include<iostream>


using ::std::string;


Especialidad::Especialidad(const string &especialidad) : especialidad(especialidad) {}

Especialidad::Especialidad(int tamano, int cantidad, Especialidad **pEspecialidad) : tamano(tamano), cantidad(cantidad),
                                                                                     pEspecialidad(pEspecialidad) {
    tamano= MAXIMA;
    pEspecialidad = new Especialidad *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano;i++) {

        pEspecialidad[i] = NULL;
    }
}


Especialidad::~Especialidad() {

    for (int i = 0; i < tamano; i++){

        delete pEspecialidad[i];
    }
    delete []pEspecialidad;

}

const string &Especialidad::getEspecialidad() const {
    return especialidad;
}

void Especialidad::setEspecialidad(const string &especialidad) {
    Especialidad::especialidad = especialidad;
}

Especialidad **Especialidad::getPEspecialidad() const {
    return pEspecialidad;
}

void Especialidad::setPEspecialidad(Especialidad **pEspecialidad) {
    Especialidad::pEspecialidad = pEspecialidad;
}

int Especialidad::getTamano() const {
    return tamano;
}

void Especialidad::setTamano(int tamano) {
    Especialidad::tamano = tamano;
}

int Especialidad::getCantidad() const {
    return cantidad;
}

void Especialidad::setCantidad(int cantidad) {
    Especialidad::cantidad = cantidad;
}

void Especialidad::agregarEsp(Especialidad* pEsp) {
	pEspecialidad[cantidad++] = pEsp;
}

string Especialidad::toStringEspecialidad() {
	stringstream x;
	x << "Especialidades: \n";
	for (int especialidad = 0; especialidad < cantidad; especialidad++) {
		x << pEspecialidad[especialidad]->toStringEspecialidad();
	}
	return x.str();
}