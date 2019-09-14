//
// Created by Lady Asura III on 13/9/2019.
//

#include <sstream>
#include "arregloPabellon.h"

arregloPabellon::arregloPabellon() : cantidad(0), tamano(10),pPabellon(new Pabellon*[10]) {

    for(int i=0;i<10;i++){
        pPabellon[i]=NULL;
    }

}

arregloPabellon::~arregloPabellon() {

    for (int i = 0; i < cantidad; i++) {
        delete pPabellon[i];
    }
    delete[] pPabellon;

}

int arregloPabellon::getCantidad() const {
    return cantidad;
}

void arregloPabellon::setCantidad(int cantidad) {
    arregloPabellon::cantidad = cantidad;
}

int arregloPabellon::getTamano() const {
    return tamano;
}

void arregloPabellon::setTamano(int tamano) {
    arregloPabellon::tamano = tamano;
}

Pabellon **arregloPabellon::getPPabellon() const {
    return pPabellon;
}

void arregloPabellon::setPPabellon(Pabellon **pPabellon) {
    arregloPabellon::pPabellon = pPabellon;
}

Pabellon *arregloPabellon::encuentraPabellon(char iD, string generos) {

    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getId() == iD && pPabellon[i]->getGenero() == generos)
            return pPabellon[i];
    }

}

string arregloPabellon::toString() {
    stringstream s;
    s << "Datos del pabellon por genero:" << "\n";
    s << "Pabellones Femeninos: " << "\n";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "femenino") {
            s << pPabellon[i]->toString();
        }
    }
    s << "Pabellones Masculinos: " << "\n";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "masculino") {
            s << pPabellon[i]->toString();
        }
    }
    return s.str();

}

string arregloPabellon::verEstadoDeLasCamas() {

    stringstream c;
    c << "Datos de cada pabellon clasificado por genero:    " << endl;
    c << "Pabellones de mujeres:  ";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "Femenino") {

            c << pPabellon[i]->getPCama()->disponibilidad();
        }
    }
    c << "Pabellones de hombres:   ";
    for (int i = 0; i < cantidad; i++)
        if (pPabellon[i]->getGenero() == "Masculino") {
            c << pPabellon[i]->getPCama()->disponibilidad();
        }
    return c.str();

}

void arregloPabellon::agregarPabellones(Pabellon *nuevoPabellon) {
    pPabellon[cantidad++] = nuevoPabellon;
}


