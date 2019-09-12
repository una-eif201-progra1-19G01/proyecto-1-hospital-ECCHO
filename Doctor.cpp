#include<string>
#include"Doctor.h"

using namespace std;


Doctor::Doctor(Doctor **pDoctor, int cantidad, int tamano) : pDoctor(pDoctor), cantidad(cantidad), tamano(tamano) {}

Doctor::Doctor(const string &nombre, const string &especialidad, Paciente *pPaciente) : nombre(nombre),
                                                                                        especialidad(especialidad),
                                                                                        pPaciente(pPaciente) {}

Doctor::~Doctor() {}

Doctor **Doctor::getPDoctor() const {
    return pDoctor;
}

void Doctor::setPDoctor(Doctor **pDoctor) {
    Doctor::pDoctor = pDoctor;
}

int Doctor::getCantidad() const {
    return cantidad;
}

void Doctor::setCantidad(int cantidad) {
    Doctor::cantidad = cantidad;
}

int Doctor::getTamano() const {
    return tamano;
}

void Doctor::setTamano(int tamano) {
    Doctor::tamano = tamano;
}

const string &Doctor::getNombre() const {
    return nombre;
}

void Doctor::setNombre(const string &nombre) {
    Doctor::nombre = nombre;
}

const string &Doctor::getEspecialidad() const {
    return especialidad;
}

void Doctor::setEspecialidad(const string &especialidad) {
    Doctor::especialidad = especialidad;
}

Paciente *Doctor::getPPaciente() const {
    return pPaciente;
}

void Doctor::setPPaciente(Paciente *pPaciente) {
    Doctor::pPaciente = pPaciente;
}


string doctor::tostring(){
	stringstream d;
	d<<"Doctor: "<<nombre<<"\n";
	d<<"Especialidad: "<<especialidad<<"\n";
	return d.str();
}
