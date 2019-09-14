//
// Created by Lady Asura III on 13/9/2019.
//

#include <sstream>
#include "arregloCama.h"

arregloCama::arregloCama() : cantidad(0), tamano(20), pCama(new Cama*[20]) {
    for(int i=0;i<10;i++){
        pCama[i]=NULL;}
}

arregloCama::~arregloCama() {
    delete[] pCama;
}

int arregloCama::getCantidad() const {
    return cantidad;
}

void arregloCama::setCantidad(int cantidad) {
    arregloCama::cantidad = cantidad;
}

int arregloCama::getTamano() const {
    return tamano;
}

void arregloCama::setTamano(int tamano) {
    arregloCama::tamano = tamano;
}

Cama **arregloCama::getPCama() const {
    return pCama;
}

void arregloCama::setPCama(Cama **pCama) {
    arregloCama::pCama = pCama;
}

Cama *arregloCama::buscarCama(string codigo) {

    for (int cam = 0; cam < cantidad; cam++)
        if ((pCama[cam]->getCodigo() == codigo) && !pCama[cam]->isEstado())
            return pCama[cam];

}

string arregloCama::toString() {


        stringstream c;
        c << "Camas por Codigo: \n";
        for (int cama = 0; cama < cantidad; cama++) {
            c << "Codigo: ";
            c << pCama[cama]->toString();
        }
        return c.str();


}

void arregloCama::eliminarCama(Cama *pCam) {

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

void arregloCama::cambiarCama(string codex) {
    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->getCodigo() == codex && !pCama[i]->isEstado()) {
            pCama[i]->setEstado(true);
        }
    }
}

string arregloCama::disponibilidad() { //ESTADO DE LAS CAMAS

    stringstream z;
    z << "CAMAS DISPONIBLES: ";
    for (int i = 0; i < cantidad; i++) {
        if (!pCama[i]->isEstado()) {
            z << pCama[i]->toString();
        }

    }
    z << "CAMAS OCUPADAS:  ";
    for (int i = 0; i < cantidad; i++) {
        if (pCama[i]->isEstado()) {
            z << pCama[i]->toString();
        }
    }
    return z.str();

}

void arregloCama::agregarCamas(Cama * nuevaCama) {

    if(cantidad<tamano)
        pCama[cantidad++]=nuevaCama;
}





