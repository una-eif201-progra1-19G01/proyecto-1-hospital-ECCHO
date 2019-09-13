#include"Pabellon.h"
#include<sstream>

using namespace std;

Pabellon::Pabellon() {}

Pabellon::Pabellon(char iD, const string &genero, int numCamas, Cama *pCama) : iD(iD), genero(genero),
                                                                               numCamas(numCamas), pCama(pCama) {}

Pabellon::Pabellon(int cantidad, int tamano, Pabellon **pPabellon) : cantidad(cantidad), tamano(tamano),
                                                                     pPabellon(pPabellon) {

    tamano = MAXIMOPABE;
    pPabellon = new Pabellon *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano; i++){

        pPabellon[i]=NULL;
    }
}


char Pabellon::getId() const {
    return iD;
}

const string &Pabellon::getGenero() const {
    return genero;
}

int Pabellon::getNumCamas() const {
    return numCamas;
}

Cama *Pabellon::getPCama() const {
    return pCama;
}

void Pabellon::setId(char iD) {
    Pabellon::iD = iD;
}

void Pabellon::setGenero(const string &genero) {
    Pabellon::genero = genero;
}

void Pabellon::setNumCamas(int numCamas) {
    Pabellon::numCamas = numCamas;
}

void Pabellon::setPCama(Cama *pCama) {
    Pabellon::pCama = pCama;
}

int Pabellon::getCantidad() const {
    return cantidad;
}

void Pabellon::setCantidad(int cantidad) {
    Pabellon::cantidad = cantidad;
}

int Pabellon::getTamano() const {
    return tamano;
}

void Pabellon::setTamano(int tamano) {
    Pabellon::tamano = tamano;
}

Pabellon **Pabellon::getPPabellon() const {
    return pPabellon;
}

void Pabellon::setPPabellon(Pabellon **pPabellon) {
    Pabellon::pPabellon = pPabellon;
}

Pabellon::~Pabellon() {
	delete[] pPabellon;
}

void Pabellon::agregar(Pabellon *pPa) {
	pPabellon[cantidad++] = pPa;
    Pabellon::cantidad = Pabellon::cantidad + 1;
}

void Pabellon::eliminar(int indice) {
    pPabellon[indice] = nullptr;
}

string Pabellon::toStringPabellon() {
    stringstream c;
    c << "Pabellón por Código: \n";
    for (int i = 0; i < cantidad; i++) {
        c << "Codigo: ";
        c << pPabellon[i]->getId();
        c << pPabellon[i]->getGenero();
    }
    return c.str();
}


