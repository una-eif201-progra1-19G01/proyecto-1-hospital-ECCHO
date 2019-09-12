#include<string>
#include"Especialidad.h"

using ::std::string;

<<<<<<< HEAD
Especialidad::Especialidad() {}
// Especialidad::Especialidad() {}
// Especialidad::~Especialidad() {}
=======
Especialidad::Especialidad(const string &especialidad) : especialidad(especialidad) {}

Especialidad::Especialidad(int tamano, int cantidad, Especialidad **pEspecialidad) : tamano(tamano), cantidad(cantidad),
                                                                                     pEspecialidad(pEspecialidad) {
    tamano= MAXIMA;
    pEspecialidad = new Especialidad *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano; i++) {

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




>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423
