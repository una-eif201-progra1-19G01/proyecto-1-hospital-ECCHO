//
// Created by Lady Asura III on 13/9/2019.
//

#include <sstream>
#include "arregloEspecialidad.h"
#include "Especialidad.h"

using namespace std;

arregloEspecialidad::arregloEspecialidad() : pEspecialidad(
        new Especialidad*[10]), tamano(10), cantidad(0) {
    for(int i=0;i<10;i++){
        pEspecialidad[i]=NULL;
    }

}

arregloEspecialidad::~arregloEspecialidad() {
    for (int i = 0; i < tamano; i++) {

        delete pEspecialidad[i];
    }
    delete[]pEspecialidad;

}

Especialidad **arregloEspecialidad::getPEspecialidad() const {
    return pEspecialidad;
}

void arregloEspecialidad::setPEspecialidad(Especialidad **pEspecialidad) {
    arregloEspecialidad::pEspecialidad = pEspecialidad;
}

int arregloEspecialidad::getTamano() const {
    return tamano;
}

void arregloEspecialidad::setTamano(int tamano) {
    arregloEspecialidad::tamano = tamano;
}

int arregloEspecialidad::getCantidad() const {
    return cantidad;
}

void arregloEspecialidad::setCantidad(int cantidad) {
    arregloEspecialidad::cantidad = cantidad;
}

string arregloEspecialidad::toString() {

    stringstream s;
    s<<"Lista de especialidades:\n";
    for(int i=0; i<cantidad; i++){
        s<<pEspecialidad[i]->toStringEspecialidad();
    }
    return s.str();
}

void arregloEspecialidad::agregarEspecialidad(Especialidad *nuevaEspecial) {
    if (cantidad < tamano) {
        pEspecialidad[cantidad++] = nuevaEspecial;
    }
}

bool arregloEspecialidad::compararNombresDeEspecialidades(string nombreEspecialidad) {

    for (int i = 0; i < cantidad; i++) {
        if (pEspecialidad[i]->getEspecialidad() == nombreEspecialidad) {
            return false;
        }
    }
    return true;

}



